import java.util.*;

public class test {
  public static class Matrix{
    private double[][] array;

    public Matrix(double[][] array){
      this.array = new double[array.length][array[0].length];
      for(int i = 0;i<array.length;i++){
        for(int j = 0;j<array[i].length;j++){
          this.array[i][j] = array[i][j];
        }
      }
    }

    public void elementwiseAddition(Matrix mat1){
      for(int i = 0;i<mat1.array.length;i++){
        for(int j = 0;j<mat1.array[i].length;j++){
          this.array[i][j] += mat1.array[i][j];
        }
      }
    }

    public void elementwiseSubtraction(Matrix mat1){
      for(int i = 0;i<mat1.array.length;i++){
        for(int j = 0;j<mat1.array[i].length;j++){
          this.array[i][j] -= mat1.array[i][j];
        }
      }
    }

    public void elementwiseMultiplication(Matrix mat1){
      for(int i = 0;i<mat1.array.length;i++){
        for(int j = 0;j<mat1.array[i].length;j++){
          this.array[i][j] *= mat1.array[i][j];
        }
      }
    }

    public void elementwisedivision(Matrix mat1){
      for(int i = 0;i<mat1.array.length;i++){
        for(int j = 0;j<mat1.array[i].length;j++){
          this.array[i][j] /= mat1.array[i][j];
        }
      }
    }

    public double[][] dotProduct(Matrix mat1){
      double [][] newArray = new double[this.array.length][mat1.array[0].length];
        for (int i = 0; i < mat1.array.length; i++) {
            for (int j = 0; j < mat1.array.length; j++) {
                newArray[i][j] = 0;
                for (int k = 0; k < mat1.array.length; k++){
                  newArray[i][j] += this.array[i][k] * mat1.array[k][j];
                }
            }
        }
        return newArray;
    }

    public double [][] transpose(){
      double [][] newArray = new double[this.array.length][this.array[0].length];
      for(int i = 0;i<this.array.length;i++){
        for(int j = 0;j<this.array[i].length;j++){
          newArray[j][i] = this.array[i][j];
        }
      }
      return newArray;
    }

    public void scalarMultiplication(int k){
      for(int i = 0;i<this.array.length;i++){
        for(int j = 0;j<this.array[i].length;j++){
          this.array[i][j] *= k;
        }
      }
    }
  }
  public static void main(String[] args) {
    double[][] a = {{1, 2}, {3, 4}};
    double[][] b = {{10, 20}, {30, 40}};
    Matrix matrix1 = new Matrix(a);
    Matrix matrix2 = new Matrix(b);
    double[][] dotProductResult = matrix1.dotProduct(matrix2);
     double[][] transposeResult = matrix1.transpose();
     System.out.println("dotProductResult: ");
     for(int i = 0;i<dotProductResult.length;i++){
      for(int j = 0;j<dotProductResult[i].length;j++){
        System.out.print(dotProductResult[i][j] + " ");
      }
      System.out.println();
    }
    System.out.println("transposeResult: ");
    for(int i = 0;i<transposeResult.length;i++){
      for(int j = 0;j<transposeResult[i].length;j++){
        System.out.print(transposeResult[i][j] + " ");
      }
      System.out.println();
    }
  }
}
