// #include <sys/utsname.h>
// #include <stdio.h>
// #include <stdlib.h>

// #include <kore/kore.h>
// #include <kore/http.h>

// #if defined(__linux__)
// #include <kore/seccomp.h>

// KORE_SECCOMP_FILTER("json",
// 					KORE_SYSCALL_ALLOW(uname));
// #endif

// int page(struct http_request *);

// int page(struct http_request *req)
// {

// 	if (req->method != HTTP_METHOD_GET)
// 	{
// 		http_response_header(req, "allow", "GET");
// 		http_response(req, HTTP_STATUS_METHOD_NOT_ALLOWED, NULL, 0);
// 		return (KORE_RESULT_OK);
// 	}

// 	struct kore_buf buf_response;
// 	struct kore_json_item *json_response;

// 	kore_buf_init(&buf_response, 1024);
// 	json_response = kore_json_create_object(NULL, NULL);

// 	kore_json_create_string(json_response, "value1", "Hello World1");
// 	kore_json_create_string(json_response, "value2", "Hello World2");

// 	kore_json_item_tobuf(json_response, &buf_response);

// 	http_response(req, 200, buf_response.data, buf_response.offset);

// 	kore_buf_cleanup(&buf_response);
// 	kore_json_item_free(json_response);

// 	return (KORE_RESULT_OK);
// }
