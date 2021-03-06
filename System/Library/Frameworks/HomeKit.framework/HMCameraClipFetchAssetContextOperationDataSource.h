/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:27 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HMCameraClipFetchAssetContextOperationDataSource.h>

@protocol HMCameraClipFetchAssetContextOperationDataSource <NSObject>
@required
-(BOOL)removeItemAtURL:(id)arg1 error:(id*)arg2;
-(id)dataTaskWithURL:(id)arg1 httpHeaderFields:(id)arg2;
-(id)dataFromEncryptedDataContext:(id)arg1 usingDecryptionManager:(id)arg2;
-(BOOL)writeData:(id)arg1 toFileURL:(id)arg2 error:(id*)arg3;
-(id)outputStreamToFileAtURL:(id)arg1 shouldAppend:(BOOL)arg2;
-(id)createTemporaryDirectoryAppropriateForURL:(id)arg1 error:(id*)arg2;
-(id)createVideoFileCombinerWithVideoFileURLs:(id)arg1 queue:(id)arg2;
-(BOOL)copyItemAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3;

@end


@class NSString;

@interface HMCameraClipFetchAssetContextOperationDataSource : NSObject <HMCameraClipFetchAssetContextOperationDataSource>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)removeItemAtURL:(id)arg1 error:(id*)arg2 ;
-(id)dataTaskWithURL:(id)arg1 httpHeaderFields:(id)arg2 ;
-(id)dataFromEncryptedDataContext:(id)arg1 usingDecryptionManager:(id)arg2 ;
-(BOOL)writeData:(id)arg1 toFileURL:(id)arg2 error:(id*)arg3 ;
-(id)outputStreamToFileAtURL:(id)arg1 shouldAppend:(BOOL)arg2 ;
-(id)createTemporaryDirectoryAppropriateForURL:(id)arg1 error:(id*)arg2 ;
-(id)createVideoFileCombinerWithVideoFileURLs:(id)arg1 queue:(id)arg2 ;
-(BOOL)copyItemAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
@end

