from typing import List


def merge_sorted_array(nums1: List[int], nums2: List[int]) -> List[int]:
    merged = []

    nums1_index = 0
    nums2_index = 0

    while nums1_index < len(nums1) or nums2_index < len(nums2):
        if nums1_index >= len(nums1):
            merged.append(nums2[nums2_index])
            nums2_index += 1
            continue

        if nums2_index >= len(nums2):
            merged.append(nums1[nums1_index])
            nums1_index += 1
            continue

        if nums1[nums1_index] < nums2[nums2_index]:
            merged.append(nums1[nums1_index])
            nums1_index += 1
        else:
            merged.append(nums2[nums2_index])
            nums2_index += 1

    return merged

# -------------- TESTS --------------

def test_merge_sorted_array():
    nums1 = [1, 2, 5, 6]
    nums2 = [2, 6, 7, 8, 11]

    merged = merge_sorted_array(nums1, nums2)
    is_correct = merged == [1, 2, 2, 5, 6, 6, 7, 8, 11]

    print(is_correct)


if __name__ == '__main__':
    test_merge_sorted_array()