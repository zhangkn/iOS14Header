/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:53 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class NSMutableDictionary;

@interface TCBundleResourceManager : NSObject {

	NSMutableDictionary* mPackageMap;

}
+(id)instance;
+(void)disposeInstance;
-(id)init;
-(id)packageWithName:(id)arg1 cacheResult:(BOOL)arg2 ;
-(id)dataForResource:(id)arg1 ofType:(id)arg2 inPackage:(id)arg3 cacheResult:(BOOL)arg4 ;
-(xmlDoc*)xmlDocumentForResource:(id)arg1 ofType:(id)arg2 inPackage:(id)arg3 cacheResult:(BOOL)arg4 ;
@end

