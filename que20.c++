// class Solution {
// public:
//     vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {

//         vector<int> output;

//         for (int i = 0; i < nums1.size(); i++) {

//             for (int j = 0; j < nums2.size(); j++) {

//                 if (nums1[i] == nums2[j]) {

//                     bool alreadyPresent = false;

//                     for (int k = 0; k < output.size(); k++) {

//                         if (output[k] == nums1[i]) {
//                             alreadyPresent = true;
//                             break;
//                         }
//                     }

//                     if (!alreadyPresent) {
//                         output.push_back(nums1[i]);
//                     }

//                     break;
//                 }
//             }
//         }

//         return output;
//     }
// };