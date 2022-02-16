
// AUTO GENERATED by vnxcppcodegen

#ifndef INCLUDE_vnx_ProcessInfo_HXX_
#define INCLUDE_vnx_ProcessInfo_HXX_

#include <vnx/package.hxx>
#include <vnx/Hash64.hpp>
#include <vnx/ModuleInfo.hxx>
#include <vnx/TopicInfo.hxx>
#include <vnx/Value.h>


namespace vnx {

class VNX_EXPORT ProcessInfo : public ::vnx::Value {
public:
	
	int64_t time = 0;
	::vnx::Hash64 id;
	std::string name;
	std::vector<::vnx::TopicInfo> topics;
	std::vector<::vnx::ModuleInfo> modules;
	
	typedef ::vnx::Value Super;
	
	static const vnx::Hash64 VNX_TYPE_HASH;
	static const vnx::Hash64 VNX_CODE_HASH;
	
	static constexpr uint64_t VNX_TYPE_ID = 0x24c2972620368907ull;
	
	ProcessInfo() {}
	
	vnx::Hash64 get_type_hash() const override;
	std::string get_type_name() const override;
	const vnx::TypeCode* get_type_code() const override;
	
	static std::shared_ptr<ProcessInfo> create();
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
	
	friend std::ostream& operator<<(std::ostream& _out, const ProcessInfo& _value);
	friend std::istream& operator>>(std::istream& _in, ProcessInfo& _value);
	
	static const vnx::TypeCode* static_get_type_code();
	static std::shared_ptr<vnx::TypeCode> static_create_type_code();
	
};

template<typename T>
void ProcessInfo::accept_generic(T& _visitor) const {
	_visitor.template type_begin<ProcessInfo>(5);
	_visitor.type_field("time", 0); _visitor.accept(time);
	_visitor.type_field("id", 1); _visitor.accept(id);
	_visitor.type_field("name", 2); _visitor.accept(name);
	_visitor.type_field("topics", 3); _visitor.accept(topics);
	_visitor.type_field("modules", 4); _visitor.accept(modules);
	_visitor.template type_end<ProcessInfo>(5);
}


} // namespace vnx


namespace vnx {

} // vnx

#endif // INCLUDE_vnx_ProcessInfo_HXX_
