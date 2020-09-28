/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:03 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class NSString, NSObject;

@interface UIDebuggingIvar : NSObject {

	NSString* _name;
	NSString* _typeDescription;
	id _value;
	NSObject* _object;
	objc_ivarRef _objcIvar;
	const char* _typeEncoding;

}

@property (assign,nonatomic) NSObject * object;                          //@synthesize object=_object - In the implementation block
@property (assign,nonatomic) objc_ivarRef objcIvar;                      //@synthesize objcIvar=_objcIvar - In the implementation block
@property (nonatomic,copy) NSString * name;                              //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * typeDescription;                   //@synthesize typeDescription=_typeDescription - In the implementation block
@property (assign,nonatomic) const char* typeEncoding;                   //@synthesize typeEncoding=_typeEncoding - In the implementation block
@property (assign,nonatomic) id value;                                   //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) NSString * valueDescription; 
@property (nonatomic,readonly) BOOL isObject; 
+(id)ivarWithObjcIvar:(objc_ivarRef)arg1 forObject:(id)arg2 ;
-(void)setObject:(NSObject *)arg1 ;
-(void)setValue:(id)arg1 ;
-(void)dealloc;
-(objc_ivarRef)objcIvar;
-(id)value;
-(void)setName:(NSString *)arg1 ;
-(BOOL)isObject;
-(NSString *)name;
-(NSObject *)object;
-(void)setObjcIvar:(objc_ivarRef)arg1 ;
-(const char*)typeEncoding;
-(void)setTypeEncoding:(const char*)arg1 ;
-(void)setTypeDescription:(NSString *)arg1 ;
-(NSString *)valueDescription;
-(NSString *)typeDescription;
@end
