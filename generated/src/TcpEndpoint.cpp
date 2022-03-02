
// AUTO GENERATED by vnxcppcodegen

#include <vnx/package.hxx>
#include <vnx/TcpEndpoint.hxx>
#include <vnx/Endpoint.hxx>
#include <vnx/Endpoint_accept.hxx>
#include <vnx/Endpoint_accept_return.hxx>
#include <vnx/Endpoint_bind.hxx>
#include <vnx/Endpoint_bind_return.hxx>
#include <vnx/Endpoint_connect.hxx>
#include <vnx/Endpoint_connect_return.hxx>
#include <vnx/Endpoint_listen.hxx>
#include <vnx/Endpoint_listen_return.hxx>
#include <vnx/Endpoint_open.hxx>
#include <vnx/Endpoint_open_return.hxx>
#include <vnx/Endpoint_to_url.hxx>
#include <vnx/Endpoint_to_url_return.hxx>
#include <vnx/TcpEndpoint_accept.hxx>
#include <vnx/TcpEndpoint_accept_return.hxx>
#include <vnx/TcpEndpoint_bind.hxx>
#include <vnx/TcpEndpoint_bind_return.hxx>
#include <vnx/TcpEndpoint_close.hxx>
#include <vnx/TcpEndpoint_close_return.hxx>
#include <vnx/TcpEndpoint_connect.hxx>
#include <vnx/TcpEndpoint_connect_return.hxx>
#include <vnx/TcpEndpoint_create_ex_return.hxx>
#include <vnx/TcpEndpoint_from_url_return.hxx>
#include <vnx/TcpEndpoint_listen.hxx>
#include <vnx/TcpEndpoint_listen_return.hxx>
#include <vnx/TcpEndpoint_open.hxx>
#include <vnx/TcpEndpoint_open_return.hxx>
#include <vnx/TcpEndpoint_set_options.hxx>
#include <vnx/TcpEndpoint_set_options_return.hxx>
#include <vnx/TcpEndpoint_to_url.hxx>
#include <vnx/TcpEndpoint_to_url_return.hxx>

#include <vnx/vnx.h>


namespace vnx {

const int32_t TcpEndpoint::default_port;

const vnx::Hash64 TcpEndpoint::VNX_TYPE_HASH(0x57568f5ebed2acedull);
const vnx::Hash64 TcpEndpoint::VNX_CODE_HASH(0x12071124357dd0d8ull);

vnx::Hash64 TcpEndpoint::get_type_hash() const {
	return VNX_TYPE_HASH;
}

std::string TcpEndpoint::get_type_name() const {
	return "vnx.TcpEndpoint";
}

const vnx::TypeCode* TcpEndpoint::get_type_code() const {
	return vnx::vnx_native_type_code_TcpEndpoint;
}

std::shared_ptr<TcpEndpoint> TcpEndpoint::create() {
	return std::make_shared<TcpEndpoint>();
}

std::shared_ptr<vnx::Value> TcpEndpoint::clone() const {
	return std::make_shared<TcpEndpoint>(*this);
}

void TcpEndpoint::read(vnx::TypeInput& _in, const vnx::TypeCode* _type_code, const uint16_t* _code) {
	vnx::read(_in, *this, _type_code, _code);
}

void TcpEndpoint::write(vnx::TypeOutput& _out, const vnx::TypeCode* _type_code, const uint16_t* _code) const {
	vnx::write(_out, *this, _type_code, _code);
}

void TcpEndpoint::accept(vnx::Visitor& _visitor) const {
	const vnx::TypeCode* _type_code = vnx::vnx_native_type_code_TcpEndpoint;
	_visitor.type_begin(*_type_code);
	_visitor.type_field(_type_code->fields[0], 0); vnx::accept(_visitor, send_buffer_size);
	_visitor.type_field(_type_code->fields[1], 1); vnx::accept(_visitor, receive_buffer_size);
	_visitor.type_field(_type_code->fields[2], 2); vnx::accept(_visitor, listen_queue_size);
	_visitor.type_field(_type_code->fields[3], 3); vnx::accept(_visitor, non_blocking);
	_visitor.type_field(_type_code->fields[4], 4); vnx::accept(_visitor, host_name);
	_visitor.type_field(_type_code->fields[5], 5); vnx::accept(_visitor, port);
	_visitor.type_field(_type_code->fields[6], 6); vnx::accept(_visitor, reuse_addr);
	_visitor.type_field(_type_code->fields[7], 7); vnx::accept(_visitor, tcp_no_delay);
	_visitor.type_field(_type_code->fields[8], 8); vnx::accept(_visitor, tcp_keepalive);
	_visitor.type_end(*_type_code);
}

void TcpEndpoint::write(std::ostream& _out) const {
	_out << "{\"__type\": \"vnx.TcpEndpoint\"";
	_out << ", \"send_buffer_size\": "; vnx::write(_out, send_buffer_size);
	_out << ", \"receive_buffer_size\": "; vnx::write(_out, receive_buffer_size);
	_out << ", \"listen_queue_size\": "; vnx::write(_out, listen_queue_size);
	_out << ", \"non_blocking\": "; vnx::write(_out, non_blocking);
	_out << ", \"host_name\": "; vnx::write(_out, host_name);
	_out << ", \"port\": "; vnx::write(_out, port);
	_out << ", \"reuse_addr\": "; vnx::write(_out, reuse_addr);
	_out << ", \"tcp_no_delay\": "; vnx::write(_out, tcp_no_delay);
	_out << ", \"tcp_keepalive\": "; vnx::write(_out, tcp_keepalive);
	_out << "}";
}

void TcpEndpoint::read(std::istream& _in) {
	if(auto _json = vnx::read_json(_in)) {
		from_object(_json->to_object());
	}
}

vnx::Object TcpEndpoint::to_object() const {
	vnx::Object _object;
	_object["__type"] = "vnx.TcpEndpoint";
	_object["send_buffer_size"] = send_buffer_size;
	_object["receive_buffer_size"] = receive_buffer_size;
	_object["listen_queue_size"] = listen_queue_size;
	_object["non_blocking"] = non_blocking;
	_object["host_name"] = host_name;
	_object["port"] = port;
	_object["reuse_addr"] = reuse_addr;
	_object["tcp_no_delay"] = tcp_no_delay;
	_object["tcp_keepalive"] = tcp_keepalive;
	return _object;
}

void TcpEndpoint::from_object(const vnx::Object& _object) {
	for(const auto& _entry : _object.field) {
		if(_entry.first == "host_name") {
			_entry.second.to(host_name);
		} else if(_entry.first == "listen_queue_size") {
			_entry.second.to(listen_queue_size);
		} else if(_entry.first == "non_blocking") {
			_entry.second.to(non_blocking);
		} else if(_entry.first == "port") {
			_entry.second.to(port);
		} else if(_entry.first == "receive_buffer_size") {
			_entry.second.to(receive_buffer_size);
		} else if(_entry.first == "reuse_addr") {
			_entry.second.to(reuse_addr);
		} else if(_entry.first == "send_buffer_size") {
			_entry.second.to(send_buffer_size);
		} else if(_entry.first == "tcp_keepalive") {
			_entry.second.to(tcp_keepalive);
		} else if(_entry.first == "tcp_no_delay") {
			_entry.second.to(tcp_no_delay);
		}
	}
}

vnx::Variant TcpEndpoint::get_field(const std::string& _name) const {
	if(_name == "send_buffer_size") {
		return vnx::Variant(send_buffer_size);
	}
	if(_name == "receive_buffer_size") {
		return vnx::Variant(receive_buffer_size);
	}
	if(_name == "listen_queue_size") {
		return vnx::Variant(listen_queue_size);
	}
	if(_name == "non_blocking") {
		return vnx::Variant(non_blocking);
	}
	if(_name == "host_name") {
		return vnx::Variant(host_name);
	}
	if(_name == "port") {
		return vnx::Variant(port);
	}
	if(_name == "reuse_addr") {
		return vnx::Variant(reuse_addr);
	}
	if(_name == "tcp_no_delay") {
		return vnx::Variant(tcp_no_delay);
	}
	if(_name == "tcp_keepalive") {
		return vnx::Variant(tcp_keepalive);
	}
	return vnx::Variant();
}

void TcpEndpoint::set_field(const std::string& _name, const vnx::Variant& _value) {
	if(_name == "send_buffer_size") {
		_value.to(send_buffer_size);
	} else if(_name == "receive_buffer_size") {
		_value.to(receive_buffer_size);
	} else if(_name == "listen_queue_size") {
		_value.to(listen_queue_size);
	} else if(_name == "non_blocking") {
		_value.to(non_blocking);
	} else if(_name == "host_name") {
		_value.to(host_name);
	} else if(_name == "port") {
		_value.to(port);
	} else if(_name == "reuse_addr") {
		_value.to(reuse_addr);
	} else if(_name == "tcp_no_delay") {
		_value.to(tcp_no_delay);
	} else if(_name == "tcp_keepalive") {
		_value.to(tcp_keepalive);
	}
}

/// \private
std::ostream& operator<<(std::ostream& _out, const TcpEndpoint& _value) {
	_value.write(_out);
	return _out;
}

/// \private
std::istream& operator>>(std::istream& _in, TcpEndpoint& _value) {
	_value.read(_in);
	return _in;
}

const vnx::TypeCode* TcpEndpoint::static_get_type_code() {
	const vnx::TypeCode* type_code = vnx::get_type_code(VNX_TYPE_HASH);
	if(!type_code) {
		type_code = vnx::register_type_code(static_create_type_code());
	}
	return type_code;
}

std::shared_ptr<vnx::TypeCode> TcpEndpoint::static_create_type_code() {
	auto type_code = std::make_shared<vnx::TypeCode>();
	type_code->name = "vnx.TcpEndpoint";
	type_code->type_hash = vnx::Hash64(0x57568f5ebed2acedull);
	type_code->code_hash = vnx::Hash64(0x12071124357dd0d8ull);
	type_code->is_native = true;
	type_code->is_class = true;
	type_code->native_size = sizeof(::vnx::TcpEndpoint);
	type_code->parents.resize(1);
	type_code->parents[0] = ::vnx::Endpoint::static_get_type_code();
	type_code->create_value = []() -> std::shared_ptr<vnx::Value> { return std::make_shared<TcpEndpoint>(); };
	type_code->methods.resize(14);
	type_code->methods[0] = ::vnx::Endpoint_accept::static_get_type_code();
	type_code->methods[1] = ::vnx::Endpoint_bind::static_get_type_code();
	type_code->methods[2] = ::vnx::Endpoint_connect::static_get_type_code();
	type_code->methods[3] = ::vnx::Endpoint_listen::static_get_type_code();
	type_code->methods[4] = ::vnx::Endpoint_open::static_get_type_code();
	type_code->methods[5] = ::vnx::Endpoint_to_url::static_get_type_code();
	type_code->methods[6] = ::vnx::TcpEndpoint_accept::static_get_type_code();
	type_code->methods[7] = ::vnx::TcpEndpoint_bind::static_get_type_code();
	type_code->methods[8] = ::vnx::TcpEndpoint_close::static_get_type_code();
	type_code->methods[9] = ::vnx::TcpEndpoint_connect::static_get_type_code();
	type_code->methods[10] = ::vnx::TcpEndpoint_listen::static_get_type_code();
	type_code->methods[11] = ::vnx::TcpEndpoint_open::static_get_type_code();
	type_code->methods[12] = ::vnx::TcpEndpoint_set_options::static_get_type_code();
	type_code->methods[13] = ::vnx::TcpEndpoint_to_url::static_get_type_code();
	type_code->fields.resize(9);
	{
		auto& field = type_code->fields[0];
		field.data_size = 4;
		field.name = "send_buffer_size";
		field.value = vnx::to_string(0);
		field.code = {7};
	}
	{
		auto& field = type_code->fields[1];
		field.data_size = 4;
		field.name = "receive_buffer_size";
		field.value = vnx::to_string(0);
		field.code = {7};
	}
	{
		auto& field = type_code->fields[2];
		field.data_size = 4;
		field.name = "listen_queue_size";
		field.value = vnx::to_string(10);
		field.code = {7};
	}
	{
		auto& field = type_code->fields[3];
		field.data_size = 1;
		field.name = "non_blocking";
		field.value = vnx::to_string(false);
		field.code = {31};
	}
	{
		auto& field = type_code->fields[4];
		field.is_extended = true;
		field.name = "host_name";
		field.code = {32};
	}
	{
		auto& field = type_code->fields[5];
		field.data_size = 4;
		field.name = "port";
		field.code = {7};
	}
	{
		auto& field = type_code->fields[6];
		field.data_size = 1;
		field.name = "reuse_addr";
		field.value = vnx::to_string(true);
		field.code = {31};
	}
	{
		auto& field = type_code->fields[7];
		field.data_size = 1;
		field.name = "tcp_no_delay";
		field.value = vnx::to_string(true);
		field.code = {31};
	}
	{
		auto& field = type_code->fields[8];
		field.data_size = 1;
		field.name = "tcp_keepalive";
		field.value = vnx::to_string(true);
		field.code = {31};
	}
	type_code->build();
	return type_code;
}

std::shared_ptr<vnx::Value> TcpEndpoint::vnx_call_switch(std::shared_ptr<const vnx::Value> _method) {
	switch(_method->get_type_hash()) {
		case 0x6b14b11386336a88ull: {
			auto _args = std::static_pointer_cast<const ::vnx::Endpoint_accept>(_method);
			auto _return_value = ::vnx::Endpoint_accept_return::create();
			_return_value->_ret_0 = accept(_args->socket);
			return _return_value;
		}
		case 0xf4cb30bb0b382bc3ull: {
			auto _args = std::static_pointer_cast<const ::vnx::Endpoint_bind>(_method);
			auto _return_value = ::vnx::Endpoint_bind_return::create();
			bind(_args->socket);
			return _return_value;
		}
		case 0xeb6f6f23b9cc504cull: {
			auto _args = std::static_pointer_cast<const ::vnx::Endpoint_connect>(_method);
			auto _return_value = ::vnx::Endpoint_connect_return::create();
			connect(_args->socket);
			return _return_value;
		}
		case 0xb4ce343ca89d6718ull: {
			auto _args = std::static_pointer_cast<const ::vnx::Endpoint_listen>(_method);
			auto _return_value = ::vnx::Endpoint_listen_return::create();
			listen(_args->socket);
			return _return_value;
		}
		case 0x1f54c9a1e8f45beeull: {
			auto _args = std::static_pointer_cast<const ::vnx::Endpoint_open>(_method);
			auto _return_value = ::vnx::Endpoint_open_return::create();
			_return_value->_ret_0 = open();
			return _return_value;
		}
		case 0x4362b4ad51f861f5ull: {
			auto _args = std::static_pointer_cast<const ::vnx::Endpoint_to_url>(_method);
			auto _return_value = ::vnx::Endpoint_to_url_return::create();
			_return_value->_ret_0 = to_url();
			return _return_value;
		}
		case 0xd6bfe7141a5482a7ull: {
			auto _args = std::static_pointer_cast<const ::vnx::TcpEndpoint_accept>(_method);
			auto _return_value = ::vnx::TcpEndpoint_accept_return::create();
			_return_value->_ret_0 = accept(_args->socket);
			return _return_value;
		}
		case 0x60904a6a0073dd35ull: {
			auto _args = std::static_pointer_cast<const ::vnx::TcpEndpoint_bind>(_method);
			auto _return_value = ::vnx::TcpEndpoint_bind_return::create();
			bind(_args->socket);
			return _return_value;
		}
		case 0x139036cfaab0583dull: {
			auto _args = std::static_pointer_cast<const ::vnx::TcpEndpoint_close>(_method);
			auto _return_value = ::vnx::TcpEndpoint_close_return::create();
			close(_args->socket);
			return _return_value;
		}
		case 0xdb3eb861b740e657ull: {
			auto _args = std::static_pointer_cast<const ::vnx::TcpEndpoint_connect>(_method);
			auto _return_value = ::vnx::TcpEndpoint_connect_return::create();
			connect(_args->socket);
			return _return_value;
		}
		case 0x965623b34fa8f37ull: {
			auto _args = std::static_pointer_cast<const ::vnx::TcpEndpoint_listen>(_method);
			auto _return_value = ::vnx::TcpEndpoint_listen_return::create();
			listen(_args->socket);
			return _return_value;
		}
		case 0x8b0fb370e3bfad18ull: {
			auto _args = std::static_pointer_cast<const ::vnx::TcpEndpoint_open>(_method);
			auto _return_value = ::vnx::TcpEndpoint_open_return::create();
			_return_value->_ret_0 = open();
			return _return_value;
		}
		case 0x8458afe05a08ddffull: {
			auto _args = std::static_pointer_cast<const ::vnx::TcpEndpoint_set_options>(_method);
			auto _return_value = ::vnx::TcpEndpoint_set_options_return::create();
			set_options(_args->socket);
			return _return_value;
		}
		case 0xfec9e2aacd9f89daull: {
			auto _args = std::static_pointer_cast<const ::vnx::TcpEndpoint_to_url>(_method);
			auto _return_value = ::vnx::TcpEndpoint_to_url_return::create();
			_return_value->_ret_0 = to_url();
			return _return_value;
		}
	}
	return nullptr;
}


} // namespace vnx


namespace vnx {

void read(TypeInput& in, ::vnx::TcpEndpoint& value, const TypeCode* type_code, const uint16_t* code) {
	if(code) {
		switch(code[0]) {
			case CODE_OBJECT:
			case CODE_ALT_OBJECT: {
				Object tmp;
				vnx::read(in, tmp, type_code, code);
				value.from_object(tmp);
				return;
			}
			case CODE_DYNAMIC:
			case CODE_ALT_DYNAMIC:
				vnx::read_dynamic(in, value);
				return;
		}
	}
	if(!type_code) {
		vnx::skip(in, type_code, code);
		return;
	}
	if(code) {
		switch(code[0]) {
			case CODE_STRUCT: type_code = type_code->depends[code[1]]; break;
			case CODE_ALT_STRUCT: type_code = type_code->depends[vnx::flip_bytes(code[1])]; break;
			default: {
				vnx::skip(in, type_code, code);
				return;
			}
		}
	}
	const char* const _buf = in.read(type_code->total_field_size);
	if(type_code->is_matched) {
		if(const auto* const _field = type_code->field_map[0]) {
			vnx::read_value(_buf + _field->offset, value.send_buffer_size, _field->code.data());
		}
		if(const auto* const _field = type_code->field_map[1]) {
			vnx::read_value(_buf + _field->offset, value.receive_buffer_size, _field->code.data());
		}
		if(const auto* const _field = type_code->field_map[2]) {
			vnx::read_value(_buf + _field->offset, value.listen_queue_size, _field->code.data());
		}
		if(const auto* const _field = type_code->field_map[3]) {
			vnx::read_value(_buf + _field->offset, value.non_blocking, _field->code.data());
		}
		if(const auto* const _field = type_code->field_map[5]) {
			vnx::read_value(_buf + _field->offset, value.port, _field->code.data());
		}
		if(const auto* const _field = type_code->field_map[6]) {
			vnx::read_value(_buf + _field->offset, value.reuse_addr, _field->code.data());
		}
		if(const auto* const _field = type_code->field_map[7]) {
			vnx::read_value(_buf + _field->offset, value.tcp_no_delay, _field->code.data());
		}
		if(const auto* const _field = type_code->field_map[8]) {
			vnx::read_value(_buf + _field->offset, value.tcp_keepalive, _field->code.data());
		}
	}
	for(const auto* _field : type_code->ext_fields) {
		switch(_field->native_index) {
			case 4: vnx::read(in, value.host_name, type_code, _field->code.data()); break;
			default: vnx::skip(in, type_code, _field->code.data());
		}
	}
}

void write(TypeOutput& out, const ::vnx::TcpEndpoint& value, const TypeCode* type_code, const uint16_t* code) {
	if(code && code[0] == CODE_OBJECT) {
		vnx::write(out, value.to_object(), nullptr, code);
		return;
	}
	if(!type_code || (code && code[0] == CODE_ANY)) {
		type_code = vnx::vnx_native_type_code_TcpEndpoint;
		out.write_type_code(type_code);
		vnx::write_class_header<::vnx::TcpEndpoint>(out);
	}
	else if(code && code[0] == CODE_STRUCT) {
		type_code = type_code->depends[code[1]];
	}
	char* const _buf = out.write(20);
	vnx::write_value(_buf + 0, value.send_buffer_size);
	vnx::write_value(_buf + 4, value.receive_buffer_size);
	vnx::write_value(_buf + 8, value.listen_queue_size);
	vnx::write_value(_buf + 12, value.non_blocking);
	vnx::write_value(_buf + 13, value.port);
	vnx::write_value(_buf + 17, value.reuse_addr);
	vnx::write_value(_buf + 18, value.tcp_no_delay);
	vnx::write_value(_buf + 19, value.tcp_keepalive);
	vnx::write(out, value.host_name, type_code, type_code->fields[4].code.data());
}

void read(std::istream& in, ::vnx::TcpEndpoint& value) {
	value.read(in);
}

void write(std::ostream& out, const ::vnx::TcpEndpoint& value) {
	value.write(out);
}

void accept(Visitor& visitor, const ::vnx::TcpEndpoint& value) {
	value.accept(visitor);
}

} // vnx
