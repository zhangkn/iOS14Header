/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:35:41 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _LSDatabase;

@interface LSRecordBuilder : NSObject {

	_LSDatabase* _db;

}
+(id)recordBuilderForType:(unsigned long long)arg1 ;
-(BOOL)parseInfoPlist:(id)arg1 ;
-(void)parseiTunesMetadata:(id)arg1 ;
-(unsigned)registerBundleRecord:(id)arg1 error:(id*)arg2 ;
-(BOOL)parseInstallationInfo:(id)arg1 ;
-(void)setDatabase:(id)arg1 ;
@end
