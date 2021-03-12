#include <kore/kore.h>
#include <kore/http.h>
#include <sys/utsname.h>

#include <stdio.h>
#include <stdlib.h>

void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

// Function to perform Selection Sort
void selectionSort(int arr[], int n)
{
	int i, j, min_idx;

	// One by one move boundary of unsorted subarray
	for (i = 0; i < n - 1; i++)
	{

		// Find the minimum element in unsorted array
		min_idx = i;
		for (j = i + 1; j < n; j++)
			if (arr[j] < arr[min_idx])
				min_idx = j;

		// Swap the found minimum element
		// with the first element
		swap(&arr[min_idx], &arr[i]);
	}
}

int page(struct http_request *);

int page(struct http_request *req)
{

	struct kore_buf buf;
	struct kore_json_item *json_response;

	kore_buf_init(&buf, 128);

	int loop = 1000000000;

	int arr[] = {0, 23, 14, 12, 9};
	int n = sizeof(arr) / sizeof(arr[0]);

	int i;

	for (i = 1; i < loop; ++i)
	{
		selectionSort(arr, n);
	}

	json_response = kore_json_create_object(NULL, NULL);

	kore_json_create_string(json_response, "value1", "feito");

	kore_json_item_tobuf(json_response, &buf);

	http_response(req, 200, buf.data, buf.offset);

	kore_buf_cleanup(&buf);
	kore_json_item_free(json_response);

	return (KORE_RESULT_OK);
}
