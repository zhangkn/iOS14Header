/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:09 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PLAssetsdPrivacySupportServiceProtocol.h>

@class PLAssetsdConnectionAuthorization, NSString;

@interface PLAssetsdPrivacySupportService : NSObject <PLAssetsdPrivacySupportServiceProtocol> {

	PLAssetsdConnectionAuthorization* _connectionAuthorization;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setClientPrivacyOptions:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)presentLimitedLibraryPickerReprompt:(/*^block*/id)arg1 ;
-(id)initWithConnectionAuthorization:(id)arg1 ;
@end

