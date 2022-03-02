
// AUTO GENERATED by vnxcppcodegen

#ifndef INCLUDE_vnx_JRPC_Proxy_CLIENT_HXX_
#define INCLUDE_vnx_JRPC_Proxy_CLIENT_HXX_

#include <vnx/Client.h>
#include <vnx/BaseProxy.h>


namespace vnx {

class JRPC_ProxyClient : public vnx::Client {
public:
	JRPC_ProxyClient(const std::string& service_name);
	
	JRPC_ProxyClient(vnx::Hash64 service_addr);
	
	void select_service(const std::string& service_name = "");
	
	void select_service_async(const std::string& service_name = "");
	
	std::shared_ptr<const ::vnx::Session> login(const std::string& name = "", const std::string& password = "");
	
	void enable_import(const std::string& topic_name = "");
	
	void enable_import_async(const std::string& topic_name = "");
	
	void disable_import(const std::string& topic_name = "");
	
	void disable_import_async(const std::string& topic_name = "");
	
	void enable_export(const std::string& topic_name = "");
	
	void enable_export_async(const std::string& topic_name = "");
	
	void disable_export(const std::string& topic_name = "");
	
	void disable_export_async(const std::string& topic_name = "");
	
	void enable_forward(const std::string& service_name = "", const int32_t& max_queue_ms = 0, const int32_t& max_queue_size = 0);
	
	void enable_forward_async(const std::string& service_name = "", const int32_t& max_queue_ms = 0, const int32_t& max_queue_size = 0);
	
	void disable_forward(const std::string& service_name = "");
	
	void disable_forward_async(const std::string& service_name = "");
	
	void enable_tunnel(const ::vnx::Hash64& tunnel_addr = ::vnx::Hash64(), const int32_t& max_queue_ms = 0, const int32_t& max_queue_size = 0);
	
	void enable_tunnel_async(const ::vnx::Hash64& tunnel_addr = ::vnx::Hash64(), const int32_t& max_queue_ms = 0, const int32_t& max_queue_size = 0);
	
	void disable_tunnel(const ::vnx::Hash64& tunnel_addr = ::vnx::Hash64());
	
	void disable_tunnel_async(const ::vnx::Hash64& tunnel_addr = ::vnx::Hash64());
	
	::vnx::Hash64 wait_on_connect();
	
	::vnx::Hash64 wait_on_disconnect();
	
	void on_connect();
	
	void on_connect_async();
	
	void on_disconnect();
	
	void on_disconnect_async();
	
	void on_remote_connect(const ::vnx::Hash64& process_id = ::vnx::Hash64());
	
	void on_remote_connect_async(const ::vnx::Hash64& process_id = ::vnx::Hash64());
	
	void on_login(const std::string& name = "", const std::string& password = "");
	
	void on_login_async(const std::string& name = "", const std::string& password = "");
	
	void on_remote_login(std::shared_ptr<const ::vnx::Session> remote_session = nullptr);
	
	void on_remote_login_async(std::shared_ptr<const ::vnx::Session> remote_session = nullptr);
	
	::vnx::Object vnx_get_config_object();
	
	::vnx::Variant vnx_get_config(const std::string& name = "");
	
	void vnx_set_config_object(const ::vnx::Object& config = ::vnx::Object());
	
	void vnx_set_config_object_async(const ::vnx::Object& config = ::vnx::Object());
	
	void vnx_set_config(const std::string& name = "", const ::vnx::Variant& value = ::vnx::Variant());
	
	void vnx_set_config_async(const std::string& name = "", const ::vnx::Variant& value = ::vnx::Variant());
	
	::vnx::TypeCode vnx_get_type_code();
	
	std::shared_ptr<const ::vnx::ModuleInfo> vnx_get_module_info();
	
	void vnx_restart();
	
	void vnx_restart_async();
	
	void vnx_stop();
	
	void vnx_stop_async();
	
	vnx::bool_t vnx_self_test();
	
};


} // namespace vnx

#endif // INCLUDE_vnx_JRPC_Proxy_CLIENT_HXX_
