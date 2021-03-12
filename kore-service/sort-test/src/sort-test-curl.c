// #include <kore/kore.h>
// #include <kore/http.h>
// #include <sys/utsname.h>

// int page(struct http_request *);

// int page(struct http_request *req)
// {

// 	struct kore_buf buf;
// 	struct kore_json json;
// 	struct kore_json_item *item;

// 	struct kore_json_item *json_response;

// 	kore_buf_init(&buf, 128);
// 	kore_json_init(&json, req->http_body->data, req->http_body->length);

// 	kore_json_parse(&json);
// 	item = kore_json_find_string(json.root, "foo/contentValue");

// 	json_response = kore_json_create_object(NULL, NULL);
// 	kore_json_create_string(json_response, "value1", "Hello World1");
// 	kore_json_create_string(json_response, "value2", "Hello World2");
// 	kore_json_create_string(json_response, "contentValue", item->data.string);

// 	kore_json_item_tobuf(json_response, &buf);

// 	http_response(req, 200, buf.data, buf.offset);

// 	kore_buf_cleanup(&buf);
// 	kore_json_cleanup(&json);

// 	return (KORE_RESULT_OK);
// }
