
// AUTO GENERATED by vnxcppcodegen

#ifndef INCLUDE_vnx_TimeSync_HXX_
#define INCLUDE_vnx_TimeSync_HXX_

#include <vnx/package.hxx>
#include <vnx/Value.h>


namespace vnx {

class VNX_EXPORT TimeSync : public ::vnx::Value {
public:
	
	int64_t time = 0;
	int64_t wall_time = 0;
	int64_t offset = 0;
	int64_t jitter = 0;
	int32_t order = 0;
	
	typedef ::vnx::Value Super;
	
	static const vnx::Hash64 VNX_TYPE_HASH;
	static const vnx::Hash64 VNX_CODE_HASH;
	
	static constexpr uint64_t VNX_TYPE_ID = 0xbf54227bf7e745b4ull;
	
	TimeSync() {}
	
	vnx::Hash64 get_type_hash() const override;
	std::string get_type_name() const override;
	const vnx::TypeCode* get_type_code() const override;
	
	virtual int64_t get_time_micros() const;
	
	static std::shared_ptr<TimeSync> create();
	std::shared_ptr<vnx::Value> clone() const override;
	
	void read(vnx::TypeInput& _in, const vnx::TypeCode* _type_code, const uint16_t* _code) override;
	void write(vnx::TypeOutput& _out, const vnx::TypeCode* _type_code, const uint16_t* _code) const override;
	
	void read(std::istream& _in) override;
	void write(std::ostream& _out) const override;
	
	template<typename T>
	void accept_generic(T& _visitor) const;
	void accept(vnx::Visitor& _visitor) const override;
	
	vnx::Object to_object() const override;
	void from_object(const vnx::Object& object) override;
	
	vnx::Variant get_field(const std::string& name) const override;
	void set_field(const std::string& name, const vnx::Variant& value) override;
	
	friend std::ostream& operator<<(std::ostream& _out, const TimeSync& _value);
	friend std::istream& operator>>(std::istream& _in, TimeSync& _value);
	
	static const vnx::TypeCode* static_get_type_code();
	static std::shared_ptr<vnx::TypeCode> static_create_type_code();
	
};

template<typename T>
void TimeSync::accept_generic(T& _visitor) const {
	_visitor.template type_begin<TimeSync>(5);
	_visitor.type_field("time", 0); _visitor.accept(time);
	_visitor.type_field("wall_time", 1); _visitor.accept(wall_time);
	_visitor.type_field("offset", 2); _visitor.accept(offset);
	_visitor.type_field("jitter", 3); _visitor.accept(jitter);
	_visitor.type_field("order", 4); _visitor.accept(order);
	_visitor.template type_end<TimeSync>(5);
}


} // namespace vnx


namespace vnx {

} // vnx

#endif // INCLUDE_vnx_TimeSync_HXX_
