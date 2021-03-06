/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:41 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FileProvider/FPActionOperation.h>

@class NSProgress, FPProviderDomain;

@interface FPDisconnectDomainOperation : FPActionOperation {

	NSProgress* _remoteProgress;
	FPProviderDomain* _domain;

}
-(void)cancel;
-(void)_tryDisconnectingSafely:(BOOL)arg1 ;
-(void)actionMain;
-(id)initWithDomain:(id)arg1 ;
@end

