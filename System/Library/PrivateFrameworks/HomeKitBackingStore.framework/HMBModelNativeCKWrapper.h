/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:51:50 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HMBModelNativeCKWrapper <HMBModelObjectCoder>
@optional
+(BOOL)includeInModelEncoding;

@required
+(void)applyNativeCKValue:(id)arg1 fromSource:(unsigned long long)arg2 associatingWith:(id)arg3 toModel:(id)arg4 propertyNamed:(id)arg5;
-(id)nativeCKValueWithEncodingContext:(id)arg1 error:(id*)arg2;

@end
