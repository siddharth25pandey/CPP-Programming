import java.text.DecimalFormat;

public class KnightTour {
	int[][] solution;
	int path = 0;

	public KnightTour(int N) {
		solution = new int[N][N];
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				solution[i][j] = 0;
			}
		}
	}

	public void solve() {
		if (findPath(0, 0, 0, solution.length)) {
			print();
		} else {
			System.out.println("NO PATH FOUND");
		}
	}

	public boolean findPath(int row, int column, int index, int N) {
		// check if current is not used already
		if (solution[row][column] != 0) {
			return false;
		}
		// mark the current cell is as used
		solution[row][column] = path++;
		// if (index == 50) {
		if (index == N * N - 1) {
			// if we are here means we have solved the problem
			return true;
		}
		// try to solve the rest of the problem recursively

		// go down and right
		if (canMove(row + 2, column + 1, N)
				&& findPath(row + 2, column + 1, index + 1, N)) {
			return true;
		}
		// go right and down
		if (canMove(row + 1, column + 2, N)
				&& findPath(row + 1, column + 2, index + 1, N)) {
			return true;
		}
		// go right and up
		if (canMove(row - 1, column + 2, N)
				&& findPath(row - 1, column + 2, index + 1, N)) {
			return true;
		}
		// go up and right
		if (canMove(row - 2, column + 1, N)
				&& findPath(row - 2, column + 1, index + 1, N)) {
			return true;
		}
		// go up and left
		if (canMove(row - 2, column - 1, N)
				&& findPath(row - 2, column - 1, index + 1, N)) {
			return true;
		}
		// go left and up
		if (canMove(row - 1, column - 2, N)
				&& findPath(row - 1, column - 2, index + 1, N)) {
			return true;
		}
		// go left and down
		if (canMove(row + 1, column - 2, N)
				&& findPath(row + 1, column - 2, index + 1, N)) {
			return true;
		}
		// go down and left
		if (canMove(row + 2, column - 1, N)
				&& findPath(row + 2, column - 1, index + 1, N)) {
			return true;
		}
		// if we are here means nothing has worked , backtrack
		solution[row][column] = 0;
		path--;
		return false;

	}

	public boolean canMove(int row, int col, int N) {
		if (row >= 0 && col >= 0 && row < N && col < N) {
			return true;
		}
		return false;
	}

	public void print() {
		DecimalFormat twodigits = new DecimalFormat("00");
		for (int i = 0; i < solution.length; i++) {
			for (int j = 0; j < solution.length; j++) {
				System.out.print("   " + twodigits.format(solution[i][j]));
			}
			System.out.println();
		}
	}

	public static void main(String[] args) {
		int N = 8;
		KnightTour i = new KnightTour(N);
		i.solve();
	}

}
