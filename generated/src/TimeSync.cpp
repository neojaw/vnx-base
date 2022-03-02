
// AUTO GENERATED by vnxcppcodegen

#include <vnx/package.hxx>
#include <vnx/TimeSync.hxx>
#include <vnx/TimeSync_get_time_micros.hxx>
#include <vnx/TimeSync_get_time_micros_return.hxx>
#include <vnx/Value.h>

#include <vnx/vnx.h>


namespace vnx {


const vnx::Hash64 TimeSync::VNX_TYPE_HASH(0xbf54227bf7e745b4ull);
const vnx::Hash64 TimeSync::VNX_CODE_HASH(0x5c64684ef64d5578ull);

vnx::Hash64 TimeSync::get_type_hash() const {
	return VNX_TYPE_HASH;
}

std::string TimeSync::get_type_name() const {
	return "vnx.TimeSync";
}

const vnx::TypeCode* TimeSync::get_type_code() const {
	return vnx::vnx_native_type_code_TimeSync;
}

std::shared_ptr<TimeSync> TimeSync::create() {
	return std::make_shared<TimeSync>();
}

std::shared_ptr<vnx::Value> TimeSync::clone() const {
	return std::make_shared<TimeSync>(*this);
}

void TimeSync::read(vnx::TypeInput& _in, const vnx::TypeCode* _type_code, const uint16_t* _code) {
	vnx::read(_in, *this, _type_code, _code);
}

void TimeSync::write(vnx::TypeOutput& _out, const vnx::TypeCode* _type_code, const uint16_t* _code) const {
	vnx::write(_out, *this, _type_code, _code);
}

void TimeSync::accept(vnx::Visitor& _visitor) const {
	const vnx::TypeCode* _type_code = vnx::vnx_native_type_code_TimeSync;
	_visitor.type_begin(*_type_code);
	_visitor.type_field(_type_code->fields[0], 0); vnx::accept(_visitor, time);
	_visitor.type_field(_type_code->fields[1], 1); vnx::accept(_visitor, wall_time);
	_visitor.type_field(_type_code->fields[2], 2); vnx::accept(_visitor, offset);
	_visitor.type_field(_type_code->fields[3], 3); vnx::accept(_visitor, jitter);
	_visitor.type_field(_type_code->fields[4], 4); vnx::accept(_visitor, order);
	_visitor.type_end(*_type_code);
}

void TimeSync::write(std::ostream& _out) const {
	_out << "{\"__type\": \"vnx.TimeSync\"";
	_out << ", \"time\": "; vnx::write(_out, time);
	_out << ", \"wall_time\": "; vnx::write(_out, wall_time);
	_out << ", \"offset\": "; vnx::write(_out, offset);
	_out << ", \"jitter\": "; vnx::write(_out, jitter);
	_out << ", \"order\": "; vnx::write(_out, order);
	_out << "}";
}

void TimeSync::read(std::istream& _in) {
	if(auto _json = vnx::read_json(_in)) {
		from_object(_json->to_object());
	}
}

vnx::Object TimeSync::to_object() const {
	vnx::Object _object;
	_object["__type"] = "vnx.TimeSync";
	_object["time"] = time;
	_object["wall_time"] = wall_time;
	_object["offset"] = offset;
	_object["jitter"] = jitter;
	_object["order"] = order;
	return _object;
}

void TimeSync::from_object(const vnx::Object& _object) {
	for(const auto& _entry : _object.field) {
		if(_entry.first == "jitter") {
			_entry.second.to(jitter);
		} else if(_entry.first == "offset") {
			_entry.second.to(offset);
		} else if(_entry.first == "order") {
			_entry.second.to(order);
		} else if(_entry.first == "time") {
			_entry.second.to(time);
		} else if(_entry.first == "wall_time") {
			_entry.second.to(wall_time);
		}
	}
}

vnx::Variant TimeSync::get_field(const std::string& _name) const {
	if(_name == "time") {
		return vnx::Variant(time);
	}
	if(_name == "wall_time") {
		return vnx::Variant(wall_time);
	}
	if(_name == "offset") {
		return vnx::Variant(offset);
	}
	if(_name == "jitter") {
		return vnx::Variant(jitter);
	}
	if(_name == "order") {
		return vnx::Variant(order);
	}
	return vnx::Variant();
}

void TimeSync::set_field(const std::string& _name, const vnx::Variant& _value) {
	if(_name == "time") {
		_value.to(time);
	} else if(_name == "wall_time") {
		_value.to(wall_time);
	} else if(_name == "offset") {
		_value.to(offset);
	} else if(_name == "jitter") {
		_value.to(jitter);
	} else if(_name == "order") {
		_value.to(order);
	}
}

/// \private
std::ostream& operator<<(std::ostream& _out, const TimeSync& _value) {
	_value.write(_out);
	return _out;
}

/// \private
std::istream& operator>>(std::istream& _in, TimeSync& _value) {
	_value.read(_in);
	return _in;
}

const vnx::TypeCode* TimeSync::static_get_type_code() {
	const vnx::TypeCode* type_code = vnx::get_type_code(VNX_TYPE_HASH);
	if(!type_code) {
		type_code = vnx::register_type_code(static_create_type_code());
	}
	return type_code;
}

std::shared_ptr<vnx::TypeCode> TimeSync::static_create_type_code() {
	auto type_code = std::make_shared<vnx::TypeCode>();
	type_code->name = "vnx.TimeSync";
	type_code->type_hash = vnx::Hash64(0xbf54227bf7e745b4ull);
	type_code->code_hash = vnx::Hash64(0x5c64684ef64d5578ull);
	type_code->is_native = true;
	type_code->is_class = true;
	type_code->native_size = sizeof(::vnx::TimeSync);
	type_code->create_value = []() -> std::shared_ptr<vnx::Value> { return std::make_shared<TimeSync>(); };
	type_code->methods.resize(1);
	type_code->methods[0] = ::vnx::TimeSync_get_time_micros::static_get_type_code();
	type_code->fields.resize(5);
	{
		auto& field = type_code->fields[0];
		field.data_size = 8;
		field.name = "time";
		field.code = {8};
	}
	{
		auto& field = type_code->fields[1];
		field.data_size = 8;
		field.name = "wall_time";
		field.code = {8};
	}
	{
		auto& field = type_code->fields[2];
		field.data_size = 8;
		field.name = "offset";
		field.code = {8};
	}
	{
		auto& field = type_code->fields[3];
		field.data_size = 8;
		field.name = "jitter";
		field.code = {8};
	}
	{
		auto& field = type_code->fields[4];
		field.data_size = 4;
		field.name = "order";
		field.code = {7};
	}
	type_code->build();
	return type_code;
}

std::shared_ptr<vnx::Value> TimeSync::vnx_call_switch(std::shared_ptr<const vnx::Value> _method) {
	switch(_method->get_type_hash()) {
		case 0xd75f3c7cc892926aull: {
			auto _args = std::static_pointer_cast<const ::vnx::TimeSync_get_time_micros>(_method);
			auto _return_value = ::vnx::TimeSync_get_time_micros_return::create();
			_return_value->_ret_0 = get_time_micros();
			return _return_value;
		}
	}
	return nullptr;
}


} // namespace vnx


namespace vnx {

void read(TypeInput& in, ::vnx::TimeSync& value, const TypeCode* type_code, const uint16_t* code) {
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
		if(const auto* const _field = type_code->field_map[1]) {
			vnx::read_value(_buf + _field->offset, value.wall_time, _field->code.data());
		}
		if(const auto* const _field = type_code->field_map[2]) {
			vnx::read_value(_buf + _field->offset, value.offset, _field->code.data());
		}
		if(const auto* const _field = type_code->field_map[3]) {
			vnx::read_value(_buf + _field->offset, value.jitter, _field->code.data());
		}
		if(const auto* const _field = type_code->field_map[4]) {
			vnx::read_value(_buf + _field->offset, value.order, _field->code.data());
		}
	}
	for(const auto* _field : type_code->ext_fields) {
		switch(_field->native_index) {
			default: vnx::skip(in, type_code, _field->code.data());
		}
	}
}

void write(TypeOutput& out, const ::vnx::TimeSync& value, const TypeCode* type_code, const uint16_t* code) {
	if(code && code[0] == CODE_OBJECT) {
		vnx::write(out, value.to_object(), nullptr, code);
		return;
	}
	if(!type_code || (code && code[0] == CODE_ANY)) {
		type_code = vnx::vnx_native_type_code_TimeSync;
		out.write_type_code(type_code);
		vnx::write_class_header<::vnx::TimeSync>(out);
	}
	else if(code && code[0] == CODE_STRUCT) {
		type_code = type_code->depends[code[1]];
	}
	char* const _buf = out.write(36);
	vnx::write_value(_buf + 0, value.time);
	vnx::write_value(_buf + 8, value.wall_time);
	vnx::write_value(_buf + 16, value.offset);
	vnx::write_value(_buf + 24, value.jitter);
	vnx::write_value(_buf + 32, value.order);
}

void read(std::istream& in, ::vnx::TimeSync& value) {
	value.read(in);
}

void write(std::ostream& out, const ::vnx::TimeSync& value) {
	value.write(out);
}

void accept(Visitor& visitor, const ::vnx::TimeSync& value) {
	value.accept(visitor);
}

} // vnx
