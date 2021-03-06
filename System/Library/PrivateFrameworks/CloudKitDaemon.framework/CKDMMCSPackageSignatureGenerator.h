/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:27 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CKDMMCSPackageSignatureGenerator : NSObject {

	BOOL _valid;
	void* _generator;

}

@property (assign,nonatomic) void* generator;                        //@synthesize generator=_generator - In the implementation block
@property (assign,getter=isValid,nonatomic) BOOL valid;              //@synthesize valid=_valid - In the implementation block
-(void*)generator;
-(void)setValid:(BOOL)arg1 ;
-(void)dealloc;
-(id)dataByFinishingSignature;
-(id)init;
-(BOOL)isValid;
-(void)updateWithData:(id)arg1 ;
-(void)setGenerator:(void*)arg1 ;
-(char*)_finishGenerator;
@end

