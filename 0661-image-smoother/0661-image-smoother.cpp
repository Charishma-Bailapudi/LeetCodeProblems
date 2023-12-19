class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& inputImage) 
    {
        int rows = inputImage.size();
        int cols = inputImage[0].size();

        // Iterate over the cells of the image.
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                // Initialize the sum and count 
                int sum = 0;
                int count = 0;

                // Iterate over all plausible nine indices.
                for (int x = i - 1; x <= i + 1; x++) {
                    for (int y = j - 1; y <= j + 1; y++) {
                        // If the indices form valid neighbor
                        if (0 <= x && x < rows && 0 <= y && y < cols) {
                            // Extract the original value of inputImage[x][y].
                            sum += inputImage[x][y] & 255;
                            count += 1;
                        }
                    }
                }
                
                // Encode the smoothed value in inputImage[i][j].
                inputImage[i][j] |= (sum / count) << 8;
            }
        }

        // Extract the smoothed value from encoded inputImage[i][j].
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                inputImage[i][j] >>= 8;
            }
        }

        // Return the smooth image.
        return inputImage;
    }
};