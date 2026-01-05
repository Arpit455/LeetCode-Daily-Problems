class Solution {
    public long maxMatrixSum(int[][] matrix) {

        int minElement = Integer.MAX_VALUE;
        int totalNegativeElements = 0 ;

        long totalSum=0;

        for(int i =0;i<matrix.length;i++)
        {
            for(int j=0;j<matrix.length;j++)
            {
                if(matrix[i][j]<0)
                totalNegativeElements++;
                minElement=Math.min(minElement,Math.abs(matrix[i][j]));
                totalSum+=Math.abs(matrix[i][j]);
            }
        }
        return totalNegativeElements%2==0 ? totalSum : totalSum-2*minElement;
        
    }
}