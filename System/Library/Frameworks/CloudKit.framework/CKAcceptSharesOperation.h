/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:42 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKOperation.h>
#import <libobjc.A.dylib/CKAcceptSharesOperationCallbacks.h>

@class NSArray, NSMutableDictionary, CKAcceptSharesOperationInfo;

@interface CKAcceptSharesOperation : CKOperation <CKAcceptSharesOperationCallbacks> {

	/*^block*/id _perShareCompletionBlock;
	/*^block*/id _acceptSharesCompletionBlock;
	NSArray* _shareMetadatas;
	NSMutableDictionary* _errorsByShareURL;
	NSMutableDictionary* _shareMetadatasByShareURL;

}

@property (nonatomic,retain) NSMutableDictionary * errorsByShareURL;                                           //@synthesize errorsByShareURL=_errorsByShareURL - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * shareMetadatasByShareURL;                                   //@synthesize shareMetadatasByShareURL=_shareMetadatasByShareURL - In the implementation block
@property (nonatomic,readonly) id<CKAcceptSharesOperationCallbacks> clientOperationCallbackProxy; 
@property (nonatomic,readonly) CKAcceptSharesOperationInfo * operationInfo; 
@property (nonatomic,copy) NSArray * shareMetadatas;                                                           //@synthesize shareMetadatas=_shareMetadatas - In the implementation block
@property (nonatomic,copy) id perShareCompletionBlock;                                                         //@synthesize perShareCompletionBlock=_perShareCompletionBlock - In the implementation block
@property (nonatomic,copy) id acceptSharesCompletionBlock;                                                     //@synthesize acceptSharesCompletionBlock=_acceptSharesCompletionBlock - In the implementation block
+(void)applyDaemonCallbackInterfaceTweaks:(id)arg1 ;
-(void)performCKOperation;
-(NSArray *)shareMetadatas;
-(void)setShareMetadatas:(NSArray *)arg1 ;
-(void)setErrorsByShareURL:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)errorsByShareURL;
-(id)perShareCompletionBlock;
-(id)acceptSharesCompletionBlock;
-(NSMutableDictionary *)shareMetadatasByShareURL;
-(void)handleShareAcceptanceForURL:(id)arg1 share:(id)arg2 error:(id)arg3 ;
-(void)setShareMetadatasByShareURL:(NSMutableDictionary *)arg1 ;
-(id)init;
-(id)activityCreate;
-(BOOL)CKOperationShouldRun:(id*)arg1 ;
-(BOOL)hasCKOperationCallbacksSet;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(void)setPerShareCompletionBlock:(id)arg1 ;
-(id)initWithShareMetadatas:(id)arg1 ;
-(void)setAcceptSharesCompletionBlock:(id)arg1 ;
-(void)fillFromOperationInfo:(id)arg1 ;
-(void)fillOutOperationInfo:(id)arg1 ;
@end

