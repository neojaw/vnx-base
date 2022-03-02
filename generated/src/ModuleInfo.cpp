
// AUTO GENERATED by vnxcppcodegen

#include <vnx/package.hxx>
#include <vnx/ModuleInfo.hxx>
#include <vnx/Endpoint.hxx>
#include <vnx/Hash64.hpp>
#include <vnx/ModuleInfo_get_cpu_load.hxx>
#include <vnx/ModuleInfo_get_cpu_load_return.hxx>
#include <vnx/ModuleInfo_get_cpu_load_total.hxx>
#include <vnx/ModuleInfo_get_cpu_load_total_return.hxx>
#include <vnx/TypeCode.hpp>
#include <vnx/Value.h>

#include <vnx/vnx.h>


namespace vnx {


const vnx::Hash64 ModuleInfo::VNX_TYPE_HASH(0xde56f839ffcee92ull);
const vnx::Hash64 ModuleInfo::VNX_CODE_HASH(0xfb652fbe84216479ull);

vnx::Hash64 ModuleInfo::get_type_hash() const {
	return VNX_TYPE_HASH;
}

std::string ModuleInfo::get_type_name() const {
	return "vnx.ModuleInfo";
}

const vnx::TypeCode* ModuleInfo::get_type_code() const {
	return vnx::vnx_native_type_code_ModuleInfo;
}

std::shared_ptr<ModuleInfo> ModuleInfo::create() {
	return std::make_shared<ModuleInfo>();
}

std::shared_ptr<vnx::Value> ModuleInfo::clone() const {
	return std::make_shared<ModuleInfo>(*this);
}

void ModuleInfo::read(vnx::TypeInput& _in, const vnx::TypeCode* _type_code, const uint16_t* _code) {
	vnx::read(_in, *this, _type_code, _code);
}

void ModuleInfo::write(vnx::TypeOutput& _out, const vnx::TypeCode* _type_code, const uint16_t* _code) const {
	vnx::write(_out, *this, _type_code, _code);
}

void ModuleInfo::accept(vnx::Visitor& _visitor) const {
	const vnx::TypeCode* _type_code = vnx::vnx_native_type_code_ModuleInfo;
	_visitor.type_begin(*_type_code);
	_visitor.type_field(_type_code->fields[0], 0); vnx::accept(_visitor, time);
	_visitor.type_field(_type_code->fields[1], 1); vnx::accept(_visitor, id);
	_visitor.type_field(_type_code->fields[2], 2); vnx::accept(_visitor, src_mac);
	_visitor.type_field(_type_code->fields[3], 3); vnx::accept(_visitor, name);
	_visitor.type_field(_type_code->fields[4], 4); vnx::accept(_visitor, type);
	_visitor.type_field(_type_code->fields[5], 5); vnx::accept(_visitor, time_started);
	_visitor.type_field(_type_code->fields[6], 6); vnx::accept(_visitor, time_idle);
	_visitor.type_field(_type_code->fields[7], 7); vnx::accept(_visitor, time_running);
	_visitor.type_field(_type_code->fields[8], 8); vnx::accept(_visitor, time_idle_total);
	_visitor.type_field(_type_code->fields[9], 9); vnx::accept(_visitor, time_running_total);
	_visitor.type_field(_type_code->fields[10], 10); vnx::accept(_visitor, num_async_pending);
	_visitor.type_field(_type_code->fields[11], 11); vnx::accept(_visitor, num_async_process);
	_visitor.type_field(_type_code->fields[12], 12); vnx::accept(_visitor, sub_topics);
	_visitor.type_field(_type_code->fields[13], 13); vnx::accept(_visitor, pub_topics);
	_visitor.type_field(_type_code->fields[14], 14); vnx::accept(_visitor, remotes);
	_visitor.type_field(_type_code->fields[15], 15); vnx::accept(_visitor, type_code);
	_visitor.type_end(*_type_code);
}

void ModuleInfo::write(std::ostream& _out) const {
	_out << "{\"__type\": \"vnx.ModuleInfo\"";
	_out << ", \"time\": "; vnx::write(_out, time);
	_out << ", \"id\": "; vnx::write(_out, id);
	_out << ", \"src_mac\": "; vnx::write(_out, src_mac);
	_out << ", \"name\": "; vnx::write(_out, name);
	_out << ", \"type\": "; vnx::write(_out, type);
	_out << ", \"time_started\": "; vnx::write(_out, time_started);
	_out << ", \"time_idle\": "; vnx::write(_out, time_idle);
	_out << ", \"time_running\": "; vnx::write(_out, time_running);
	_out << ", \"time_idle_total\": "; vnx::write(_out, time_idle_total);
	_out << ", \"time_running_total\": "; vnx::write(_out, time_running_total);
	_out << ", \"num_async_pending\": "; vnx::write(_out, num_async_pending);
	_out << ", \"num_async_process\": "; vnx::write(_out, num_async_process);
	_out << ", \"sub_topics\": "; vnx::write(_out, sub_topics);
	_out << ", \"pub_topics\": "; vnx::write(_out, pub_topics);
	_out << ", \"remotes\": "; vnx::write(_out, remotes);
	_out << ", \"type_code\": "; vnx::write(_out, type_code);
	_out << "}";
}

void ModuleInfo::read(std::istream& _in) {
	if(auto _json = vnx::read_json(_in)) {
		from_object(_json->to_object());
	}
}

vnx::Object ModuleInfo::to_object() const {
	vnx::Object _object;
	_object["__type"] = "vnx.ModuleInfo";
	_object["time"] = time;
	_object["id"] = id;
	_object["src_mac"] = src_mac;
	_object["name"] = name;
	_object["type"] = type;
	_object["time_started"] = time_started;
	_object["time_idle"] = time_idle;
	_object["time_running"] = time_running;
	_object["time_idle_total"] = time_idle_total;
	_object["time_running_total"] = time_running_total;
	_object["num_async_pending"] = num_async_pending;
	_object["num_async_process"] = num_async_process;
	_object["sub_topics"] = sub_topics;
	_object["pub_topics"] = pub_topics;
	_object["remotes"] = remotes;
	_object["type_code"] = type_code;
	return _object;
}

void ModuleInfo::from_object(const vnx::Object& _object) {
	for(const auto& _entry : _object.field) {
		if(_entry.first == "id") {
			_entry.second.to(id);
		} else if(_entry.first == "name") {
			_entry.second.to(name);
		} else if(_entry.first == "num_async_pending") {
			_entry.second.to(num_async_pending);
		} else if(_entry.first == "num_async_process") {
			_entry.second.to(num_async_process);
		} else if(_entry.first == "pub_topics") {
			_entry.second.to(pub_topics);
		} else if(_entry.first == "remotes") {
			_entry.second.to(remotes);
		} else if(_entry.first == "src_mac") {
			_entry.second.to(src_mac);
		} else if(_entry.first == "sub_topics") {
			_entry.second.to(sub_topics);
		} else if(_entry.first == "time") {
			_entry.second.to(time);
		} else if(_entry.first == "time_idle") {
			_entry.second.to(time_idle);
		} else if(_entry.first == "time_idle_total") {
			_entry.second.to(time_idle_total);
		} else if(_entry.first == "time_running") {
			_entry.second.to(time_running);
		} else if(_entry.first == "time_running_total") {
			_entry.second.to(time_running_total);
		} else if(_entry.first == "time_started") {
			_entry.second.to(time_started);
		} else if(_entry.first == "type") {
			_entry.second.to(type);
		} else if(_entry.first == "type_code") {
			_entry.second.to(type_code);
		}
	}
}

vnx::Variant ModuleInfo::get_field(const std::string& _name) const {
	if(_name == "time") {
		return vnx::Variant(time);
	}
	if(_name == "id") {
		return vnx::Variant(id);
	}
	if(_name == "src_mac") {
		return vnx::Variant(src_mac);
	}
	if(_name == "name") {
		return vnx::Variant(name);
	}
	if(_name == "type") {
		return vnx::Variant(type);
	}
	if(_name == "time_started") {
		return vnx::Variant(time_started);
	}
	if(_name == "time_idle") {
		return vnx::Variant(time_idle);
	}
	if(_name == "time_running") {
		return vnx::Variant(time_running);
	}
	if(_name == "time_idle_total") {
		return vnx::Variant(time_idle_total);
	}
	if(_name == "time_running_total") {
		return vnx::Variant(time_running_total);
	}
	if(_name == "num_async_pending") {
		return vnx::Variant(num_async_pending);
	}
	if(_name == "num_async_process") {
		return vnx::Variant(num_async_process);
	}
	if(_name == "sub_topics") {
		return vnx::Variant(sub_topics);
	}
	if(_name == "pub_topics") {
		return vnx::Variant(pub_topics);
	}
	if(_name == "remotes") {
		return vnx::Variant(remotes);
	}
	if(_name == "type_code") {
		return vnx::Variant(type_code);
	}
	return vnx::Variant();
}

void ModuleInfo::set_field(const std::string& _name, const vnx::Variant& _value) {
	if(_name == "time") {
		_value.to(time);
	} else if(_name == "id") {
		_value.to(id);
	} else if(_name == "src_mac") {
		_value.to(src_mac);
	} else if(_name == "name") {
		_value.to(name);
	} else if(_name == "type") {
		_value.to(type);
	} else if(_name == "time_started") {
		_value.to(time_started);
	} else if(_name == "time_idle") {
		_value.to(time_idle);
	} else if(_name == "time_running") {
		_value.to(time_running);
	} else if(_name == "time_idle_total") {
		_value.to(time_idle_total);
	} else if(_name == "time_running_total") {
		_value.to(time_running_total);
	} else if(_name == "num_async_pending") {
		_value.to(num_async_pending);
	} else if(_name == "num_async_process") {
		_value.to(num_async_process);
	} else if(_name == "sub_topics") {
		_value.to(sub_topics);
	} else if(_name == "pub_topics") {
		_value.to(pub_topics);
	} else if(_name == "remotes") {
		_value.to(remotes);
	} else if(_name == "type_code") {
		_value.to(type_code);
	}
}

/// \private
std::ostream& operator<<(std::ostream& _out, const ModuleInfo& _value) {
	_value.write(_out);
	return _out;
}

/// \private
std::istream& operator>>(std::istream& _in, ModuleInfo& _value) {
	_value.read(_in);
	return _in;
}

const vnx::TypeCode* ModuleInfo::static_get_type_code() {
	const vnx::TypeCode* type_code = vnx::get_type_code(VNX_TYPE_HASH);
	if(!type_code) {
		type_code = vnx::register_type_code(static_create_type_code());
	}
	return type_code;
}

std::shared_ptr<vnx::TypeCode> ModuleInfo::static_create_type_code() {
	auto type_code = std::make_shared<vnx::TypeCode>();
	type_code->name = "vnx.ModuleInfo";
	type_code->type_hash = vnx::Hash64(0xde56f839ffcee92ull);
	type_code->code_hash = vnx::Hash64(0xfb652fbe84216479ull);
	type_code->is_native = true;
	type_code->is_class = true;
	type_code->native_size = sizeof(::vnx::ModuleInfo);
	type_code->create_value = []() -> std::shared_ptr<vnx::Value> { return std::make_shared<ModuleInfo>(); };
	type_code->methods.resize(2);
	type_code->methods[0] = ::vnx::ModuleInfo_get_cpu_load::static_get_type_code();
	type_code->methods[1] = ::vnx::ModuleInfo_get_cpu_load_total::static_get_type_code();
	type_code->fields.resize(16);
	{
		auto& field = type_code->fields[0];
		field.data_size = 8;
		field.name = "time";
		field.code = {8};
	}
	{
		auto& field = type_code->fields[1];
		field.is_extended = true;
		field.name = "id";
		field.code = {4};
	}
	{
		auto& field = type_code->fields[2];
		field.is_extended = true;
		field.name = "src_mac";
		field.code = {4};
	}
	{
		auto& field = type_code->fields[3];
		field.is_extended = true;
		field.name = "name";
		field.code = {32};
	}
	{
		auto& field = type_code->fields[4];
		field.is_extended = true;
		field.name = "type";
		field.code = {32};
	}
	{
		auto& field = type_code->fields[5];
		field.data_size = 8;
		field.name = "time_started";
		field.code = {8};
	}
	{
		auto& field = type_code->fields[6];
		field.data_size = 8;
		field.name = "time_idle";
		field.code = {8};
	}
	{
		auto& field = type_code->fields[7];
		field.data_size = 8;
		field.name = "time_running";
		field.code = {8};
	}
	{
		auto& field = type_code->fields[8];
		field.data_size = 8;
		field.name = "time_idle_total";
		field.code = {8};
	}
	{
		auto& field = type_code->fields[9];
		field.data_size = 8;
		field.name = "time_running_total";
		field.code = {8};
	}
	{
		auto& field = type_code->fields[10];
		field.data_size = 8;
		field.name = "num_async_pending";
		field.code = {8};
	}
	{
		auto& field = type_code->fields[11];
		field.data_size = 8;
		field.name = "num_async_process";
		field.code = {8};
	}
	{
		auto& field = type_code->fields[12];
		field.is_extended = true;
		field.name = "sub_topics";
		field.code = {12, 32};
	}
	{
		auto& field = type_code->fields[13];
		field.is_extended = true;
		field.name = "pub_topics";
		field.code = {12, 32};
	}
	{
		auto& field = type_code->fields[14];
		field.is_extended = true;
		field.name = "remotes";
		field.code = {13, 3, 4, 16};
	}
	{
		auto& field = type_code->fields[15];
		field.is_extended = true;
		field.name = "type_code";
		field.code = {14};
	}
	type_code->build();
	return type_code;
}

std::shared_ptr<vnx::Value> ModuleInfo::vnx_call_switch(std::shared_ptr<const vnx::Value> _method) {
	switch(_method->get_type_hash()) {
		case 0xfc59e460d5536e4aull: {
			auto _args = std::static_pointer_cast<const ::vnx::ModuleInfo_get_cpu_load>(_method);
			auto _return_value = ::vnx::ModuleInfo_get_cpu_load_return::create();
			_return_value->_ret_0 = get_cpu_load();
			return _return_value;
		}
		case 0xf76722d8c74ee1fdull: {
			auto _args = std::static_pointer_cast<const ::vnx::ModuleInfo_get_cpu_load_total>(_method);
			auto _return_value = ::vnx::ModuleInfo_get_cpu_load_total_return::create();
			_return_value->_ret_0 = get_cpu_load_total();
			return _return_value;
		}
	}
	return nullptr;
}


} // namespace vnx


namespace vnx {

void read(TypeInput& in, ::vnx::ModuleInfo& value, const TypeCode* type_code, const uint16_t* code) {
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
			vnx::read_value(_buf + _field->offset, value.time, _field->code.data());
		}
		if(const auto* const _field = type_code->field_map[5]) {
			vnx::read_value(_buf + _field->offset, value.time_started, _field->code.data());
		}
		if(const auto* const _field = type_code->field_map[6]) {
			vnx::read_value(_buf + _field->offset, value.time_idle, _field->code.data());
		}
		if(const auto* const _field = type_code->field_map[7]) {
			vnx::read_value(_buf + _field->offset, value.time_running, _field->code.data());
		}
		if(const auto* const _field = type_code->field_map[8]) {
			vnx::read_value(_buf + _field->offset, value.time_idle_total, _field->code.data());
		}
		if(const auto* const _field = type_code->field_map[9]) {
			vnx::read_value(_buf + _field->offset, value.time_running_total, _field->code.data());
		}
		if(const auto* const _field = type_code->field_map[10]) {
			vnx::read_value(_buf + _field->offset, value.num_async_pending, _field->code.data());
		}
		if(const auto* const _field = type_code->field_map[11]) {
			vnx::read_value(_buf + _field->offset, value.num_async_process, _field->code.data());
		}
	}
	for(const auto* _field : type_code->ext_fields) {
		switch(_field->native_index) {
			case 1: vnx::read(in, value.id, type_code, _field->code.data()); break;
			case 2: vnx::read(in, value.src_mac, type_code, _field->code.data()); break;
			case 3: vnx::read(in, value.name, type_code, _field->code.data()); break;
			case 4: vnx::read(in, value.type, type_code, _field->code.data()); break;
			case 12: vnx::read(in, value.sub_topics, type_code, _field->code.data()); break;
			case 13: vnx::read(in, value.pub_topics, type_code, _field->code.data()); break;
			case 14: vnx::read(in, value.remotes, type_code, _field->code.data()); break;
			case 15: vnx::read(in, value.type_code, type_code, _field->code.data()); break;
			default: vnx::skip(in, type_code, _field->code.data());
		}
	}
}

void write(TypeOutput& out, const ::vnx::ModuleInfo& value, const TypeCode* type_code, const uint16_t* code) {
	if(code && code[0] == CODE_OBJECT) {
		vnx::write(out, value.to_object(), nullptr, code);
		return;
	}
	if(!type_code || (code && code[0] == CODE_ANY)) {
		type_code = vnx::vnx_native_type_code_ModuleInfo;
		out.write_type_code(type_code);
		vnx::write_class_header<::vnx::ModuleInfo>(out);
	}
	else if(code && code[0] == CODE_STRUCT) {
		type_code = type_code->depends[code[1]];
	}
	char* const _buf = out.write(64);
	vnx::write_value(_buf + 0, value.time);
	vnx::write_value(_buf + 8, value.time_started);
	vnx::write_value(_buf + 16, value.time_idle);
	vnx::write_value(_buf + 24, value.time_running);
	vnx::write_value(_buf + 32, value.time_idle_total);
	vnx::write_value(_buf + 40, value.time_running_total);
	vnx::write_value(_buf + 48, value.num_async_pending);
	vnx::write_value(_buf + 56, value.num_async_process);
	vnx::write(out, value.id, type_code, type_code->fields[1].code.data());
	vnx::write(out, value.src_mac, type_code, type_code->fields[2].code.data());
	vnx::write(out, value.name, type_code, type_code->fields[3].code.data());
	vnx::write(out, value.type, type_code, type_code->fields[4].code.data());
	vnx::write(out, value.sub_topics, type_code, type_code->fields[12].code.data());
	vnx::write(out, value.pub_topics, type_code, type_code->fields[13].code.data());
	vnx::write(out, value.remotes, type_code, type_code->fields[14].code.data());
	vnx::write(out, value.type_code, type_code, type_code->fields[15].code.data());
}

void read(std::istream& in, ::vnx::ModuleInfo& value) {
	value.read(in);
}

void write(std::ostream& out, const ::vnx::ModuleInfo& value) {
	value.write(out);
}

void accept(Visitor& visitor, const ::vnx::ModuleInfo& value) {
	value.accept(visitor);
}

} // vnx
