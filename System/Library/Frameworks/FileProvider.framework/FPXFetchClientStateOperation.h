/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:41 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FileProvider/FPOperation.h>

@class CSSearchableIndex, NSString, FPXDomainContext;

@interface FPXFetchClientStateOperation : FPOperation {

	CSSearchableIndex* _index;
	NSString* _indexName;
	NSString* _domainIdentifier;
	NSString* _reason;
	FPXDomainContext* _domainContext;

}
+(id)_currentIndexerVersion;
-(id)operationDescription;
-(id)initWithIndex:(id)arg1 context:(id)arg2 indexName:(id)arg3 domainID:(id)arg4 reason:(id)arg5 ;
-(void)main;
-(void)_handleFetchedClientState:(id)arg1 error:(id)arg2 ;
-(id)_clientStateCurrentVersionIfNeedReset;
-(void)_markClientStateResetDone;
-(void)_fetchClientState;
@end

