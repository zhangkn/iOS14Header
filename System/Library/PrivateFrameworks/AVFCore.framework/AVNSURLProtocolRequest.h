/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:54 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVAssetCustomURLRequest.h>

@class AVAssetCustomURLBridgeForNSURLProtocol;

@interface AVNSURLProtocolRequest : AVAssetCustomURLRequest {

	AVAssetCustomURLBridgeForNSURLProtocol* _bridge;
	CFURLConnectionRef _connection;
	CFErrorRef _error;

}

@property (assign,nonatomic,__weak) AVAssetCustomURLBridgeForNSURLProtocol * bridge;              //@synthesize bridge=_bridge - In the implementation block
@property (assign,nonatomic) CFURLConnectionRef connection; 
-(AVAssetCustomURLBridgeForNSURLProtocol *)bridge;
-(CFURLConnectionRef)connection;
-(void)setBridge:(AVAssetCustomURLBridgeForNSURLProtocol *)arg1 ;
-(void)dealloc;
-(void)setConnection:(CFURLConnectionRef)arg1 ;
@end
