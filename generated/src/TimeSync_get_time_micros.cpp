
// AUTO GENERATED by vnxcppcodegen

#include <vnx/package.hxx>
#include <vnx/TimeSync_get_time_micros.hxx>
#include <vnx/TimeSync_get_time_micros_return.hxx>
#include <vnx/Value.h>

#include <vnx/vnx.h>


namespace vnx {


const vnx::Hash64 TimeSync_get_time_micros::VNX_TYPE_HASH(0xd75f3c7cc892926aull);
const vnx::Hash64 TimeSync_get_time_micros::VNX_CODE_HASH(0x6da1a7c571ee57caull);

vnx::Hash64 TimeSync_get_time_micros::get_type_hash() const {
	return VNX_TYPE_HASH;
}

std::string TimeSync_get_time_micros::get_type_name() const {
	return "vnx.TimeSync.get_time_micros";
}

const vnx::TypeCode* TimeSync_get_time_micros::get_type_code() const {
	return vnx::vnx_native_type_code_TimeSync_get_time_micros;
}

std::shared_ptr<TimeSync_get_time_micros> TimeSync_get_time_micros::create() {
	return std::make_shared<TimeSync_get_time_micros>();
}

std::shared_ptr<vnx::Value> TimeSync_get_time_micros::clone() const {
	return std::make_shared<TimeSync_get_time_micros>(*this);
}

void TimeSync_get_time_micros::read(vnx::TypeInput& _in, const vnx::TypeCode* _type_code, const uint16_t* _code) {
	vnx::read(_in, *this, _type_code, _code);
}

void TimeSync_get_time_micros::write(vnx::TypeOutput& _out, const vnx::TypeCode* _type_code, const uint16_t* _code) const {
	vnx::write(_out, *this, _type_code, _code);
}

void TimeSync_get_time_micros::accept(vnx::Visitor& _visitor) const {
	const vnx::TypeCode* _type_code = vnx::vnx_native_type_code_TimeSync_get_time_micros;
	_visitor.type_begin(*_type_code);
	_visitor.type_end(*_type_code);
}

void TimeSync_get_time_micros::write(std::ostream& _out) const {
	_out << "{\"__type\": \"vnx.TimeSync.get_time_micros\"";
	_out << "}";
}

void TimeSync_get_time_micros::read(std::istream& _in) {
	if(auto _json = vnx::read_json(_in)) {
		from_object(_json->to_object());
	}
}

vnx::Object TimeSync_get_time_micros::to_object() const {
	vnx::Object _object;
	_object["__type"] = "vnx.TimeSync.get_time_micros";
	return _object;
}

void TimeSync_get_time_micros::from_object(const vnx::Object& _object) {
}

vnx::Variant TimeSync_get_time_micros::get_field(const std::string& _name) const {
	return vnx::Variant();
}

void TimeSync_get_time_micros::set_field(const std::string& _name, const vnx::Variant& _value) {
}

/// \private
std::ostream& operator<<(std::ostream& _out, const TimeSync_get_time_micros& _value) {
	_value.write(_out);
	return _out;
}

/// \private
std::istream& operator>>(std::istream& _in, TimeSync_get_time_micros& _value) {
	_value.read(_in);
	return _in;
}

const vnx::TypeCode* TimeSync_get_time_micros::static_get_type_code() {
	const vnx::TypeCode* type_code = vnx::get_type_code(VNX_TYPE_HASH);
	if(!type_code) {
		type_code = vnx::register_type_code(static_create_type_code());
	}
	return type_code;
}

std::shared_ptr<vnx::TypeCode> TimeSync_get_time_micros::static_create_type_code() {
	auto type_code = std::make_shared<vnx::TypeCode>();
	type_code->name = "vnx.TimeSync.get_time_micros";
	type_code->type_hash = vnx::Hash64(0xd75f3c7cc892926aull);
	type_code->code_hash = vnx::Hash64(0x6da1a7c571ee57caull);
	type_code->is_native = true;
	type_code->is_class = true;
	type_code->is_method = true;
	type_code->native_size = sizeof(::vnx::TimeSync_get_time_micros);
	type_code->create_value = []() -> std::shared_ptr<vnx::Value> { return std::make_shared<TimeSync_get_time_micros>(); };
	type_code->is_const = true;
	type_code->return_type = ::vnx::TimeSync_get_time_micros_return::static_get_type_code();
	type_code->build();
	return type_code;
}


} // namespace vnx


namespace vnx {

void read(TypeInput& in, ::vnx::TimeSync_get_time_micros& value, const TypeCode* type_code, const uint16_t* code) {
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
	in.read(type_code->total_field_size);
	if(type_code->is_matched) {
	}
	for(const auto* _field : type_code->ext_fields) {
		switch(_field->native_index) {
			default: vnx::skip(in, type_code, _field->code.data());
		}
	}
}

void write(TypeOutput& out, const ::vnx::TimeSync_get_time_micros& value, const TypeCode* type_code, const uint16_t* code) {
	if(code && code[0] == CODE_OBJECT) {
		vnx::write(out, value.to_object(), nullptr, code);
		return;
	}
	if(!type_code || (code && code[0] == CODE_ANY)) {
		type_code = vnx::vnx_native_type_code_TimeSync_get_time_micros;
		out.write_type_code(type_code);
		vnx::write_class_header<::vnx::TimeSync_get_time_micros>(out);
	}
	else if(code && code[0] == CODE_STRUCT) {
		type_code = type_code->depends[code[1]];
	}
}

void read(std::istream& in, ::vnx::TimeSync_get_time_micros& value) {
	value.read(in);
}

void write(std::ostream& out, const ::vnx::TimeSync_get_time_micros& value) {
	value.write(out);
}

void accept(Visitor& visitor, const ::vnx::TimeSync_get_time_micros& value) {
	value.accept(visitor);
}

} // vnx
