/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:24 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocs/BROperation.h>

@class CKShare;

@interface BRShareUnshareOperation : BROperation {

	CKShare* _share;
	/*^block*/id _unshareCompletionBlock;

}

@property (nonatomic,retain) CKShare * share;              //@synthesize share=_share - In the implementation block
@property (copy) id unshareCompletionBlock;                //@synthesize unshareCompletionBlock=_unshareCompletionBlock - In the implementation block
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(CKShare *)share;
-(id)initWithShare:(id)arg1 ;
-(id)unshareCompletionBlock;
-(void)setUnshareCompletionBlock:(id)arg1 ;
-(void)setShare:(CKShare *)arg1 ;
-(void)main;
@end

