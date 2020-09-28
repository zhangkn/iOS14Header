/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:55 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <libobjc.A.dylib/VCPTaskProcessingClientProtocol.h>

@class NSXPCConnection;

@interface VCPTaskProcessingService : NSObject <VCPTaskProcessingClientProtocol> {

	NSXPCConnection* _connection;

}
+(id)service;
-(id)connection;
-(id)sandboxExtensionForURL:(id)arg1 error:(id*)arg2 ;
-(void)requestImageProcessingTask:(Class)arg1 forPixelBuffer:(CVBufferRef)arg2 withOptions:(id)arg3 andCompletionHandler:(/*^block*/id)arg4 ;
-(void)requestImageProcessingTask:(Class)arg1 forAssetURL:(id)arg2 withOptions:(id)arg3 andCompletionHandler:(/*^block*/id)arg4 ;
@end
