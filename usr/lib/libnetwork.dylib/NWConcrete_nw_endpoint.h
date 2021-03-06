/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:33 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /usr/lib/libnetwork.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libnetwork.dylib/libnetwork.dylib-Structs.h>
#import <libobjc.A.dylib/OS_nw_endpoint.h>

@protocol OS_nw_context, OS_nw_interface, OS_dnssd_cname_array;
@class NSObject, NSString;

@interface NWConcrete_nw_endpoint : NSObject <OS_nw_endpoint> {

	NSObject*<OS_nw_context> context;
	NSObject*<OS_nw_interface> interface;
	int interface_type;
	char* description;
	char* redacted_description;
	NWConcrete_nw_endpoint* parent_endpoint;
	NSObject*<OS_dnssd_cname_array> cname_array;
	unsigned short alternate_port;
	nw_endpoint_alterative_s* first_alternative;
	SCD_Struct_NW28* alternative_list;
	os_unfair_lock_s lock;
	nw_hash_tableRef associations;
	unsigned is_local_domain : 1;
	unsigned parent_is_proxy : 1;
	unsigned description_used : 1;
	unsigned redacted_description_used : 1;
	unsigned do_not_redact_description : 1;

}

@property (nonatomic,readonly) unsigned type; 
@property (nonatomic,readonly) const char* domainForPolicy; 
@property (nonatomic,readonly) const char* hostname; 
@property (nonatomic,readonly) unsigned short port; 
@property (nonatomic,retain) NSObject*<OS_nw_txt_record> txtRecord; 
@property (assign,nonatomic) unsigned short priority; 
@property (assign,nonatomic) unsigned short weight; 
@property (nonatomic,readonly) const char* getDescription; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned short)port;
-(id)copyDictionary;
-(id)redactedDescription;
-(char*)createDescription:(BOOL)arg1 ;
-(void)setWeight:(unsigned short)arg1 ;
-(void)setTxtRecord:(NSObject*<OS_nw_txt_record>)arg1 ;
-(const char*)getRedactedDescription;
-(id)copyEndpoint;
-(void)setPriority:(unsigned short)arg1 ;
-(NSObject*<OS_nw_txt_record>)txtRecord;
-(const char*)getDescription;
-(void)dealloc;
-(BOOL)isEqualToEndpoint:(id)arg1 matchInterface:(BOOL)arg2 matchParent:(BOOL)arg3 ;
-(const char*)hostname;
-(id)init;
-(unsigned)type;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned short)priority;
-(unsigned short)weight;
-(const char*)domainForPolicy;
-(NSString *)description;
-(unsigned long long)getHash;
@end

