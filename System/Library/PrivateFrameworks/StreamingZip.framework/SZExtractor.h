/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:31 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/StreamingZip.framework/StreamingZip
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StreamingZip/StreamingZip-Structs.h>
#import <libobjc.A.dylib/SZExtractor.h>

@protocol SZExtractor <NSObject,NSSecureCoding>
@property (assign,nonatomic,__weak) id<SZExtractorDelegate> extractorDelegate; 
@property (nonatomic,readonly) BOOL doesConsumeExtractedData; 
@optional
-(void)prepareForExtractionToPath:(id)arg1 completionBlock:(/*^block*/id)arg2;
-(BOOL)doesConsumeExtractedData;
-(BOOL)consumeExtractedDataIfNeeded;

@required
-(void)terminateStreamWithError:(id)arg1 completionBlock:(/*^block*/id)arg2;
-(void)suspendStreamWithCompletionBlock:(/*^block*/id)arg1;
-(void)supplyBytes:(id)arg1 withCompletionBlock:(/*^block*/id)arg2;
-(void)finishStreamWithCompletionBlock:(/*^block*/id)arg1;
-(void)prepareForExtraction:(/*^block*/id)arg1;
-(void)setExtractorDelegate:(id)arg1;
-(id<SZExtractorDelegate>)extractorDelegate;

@end

#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_dispatch_queue;
@class NSString, NSDictionary, NSXPCConnection, StreamingUnzipper, NSObject, SZExtractorInternalDelegate, NSError;

@interface SZExtractor : NSObject <SZExtractor, NSCopying> {

	BOOL _isLocalExtractor;
	BOOL _needsPreparation;
	BOOL _hasHadPostSetupMethodsCalled;
	NSString* _extractionPath;
	NSDictionary* _options;
	unsigned long long _lastResumptionOffset;
	NSXPCConnection* _unzipServiceConnection;
	StreamingUnzipper* _inProcessUnzipper;
	NSObject*<OS_dispatch_queue> _serialQueue;
	SZExtractorInternalDelegate* _internalExtractorDelegate;
	NSError* _error;

}

@property (assign,nonatomic) unsigned long long lastResumptionOffset;                                //@synthesize lastResumptionOffset=_lastResumptionOffset - In the implementation block
@property (nonatomic,readonly) NSXPCConnection * unzipServiceConnection;                             //@synthesize unzipServiceConnection=_unzipServiceConnection - In the implementation block
@property (nonatomic,readonly) StreamingUnzipper * inProcessUnzipper;                                //@synthesize inProcessUnzipper=_inProcessUnzipper - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> serialQueue;                             //@synthesize serialQueue=_serialQueue - In the implementation block
@property (nonatomic,readonly) SZExtractorInternalDelegate * internalExtractorDelegate;              //@synthesize internalExtractorDelegate=_internalExtractorDelegate - In the implementation block
@property (nonatomic,retain) NSError * error;                                                        //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) BOOL isLocalExtractor;                                                //@synthesize isLocalExtractor=_isLocalExtractor - In the implementation block
@property (assign,nonatomic) BOOL needsPreparation;                                                  //@synthesize needsPreparation=_needsPreparation - In the implementation block
@property (assign,nonatomic) BOOL hasHadPostSetupMethodsCalled;                                      //@synthesize hasHadPostSetupMethodsCalled=_hasHadPostSetupMethodsCalled - In the implementation block
@property (nonatomic,copy) NSString * extractionPath;                                                //@synthesize extractionPath=_extractionPath - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * options;                                          //@synthesize options=_options - In the implementation block
@property (assign,nonatomic,__weak) id<SZExtractorDelegate> extractorDelegate; 
@property (assign,nonatomic,__weak) id<SZExtractorDelegate> delegate; 
@property (nonatomic,readonly) BOOL doesConsumeExtractedData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)optionsForArchiveURL:(id)arg1 digest:(id)arg2 ;
+(BOOL)supportsSecureCoding;
+(void)enableDebugLogging;
+(id)knownSZExtractorImplementations;
-(void)terminateStreamWithError:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)prepareForExtractionToPath:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithPath:(id)arg1 options:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(void)suspendStreamWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)supplyBytes:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)finishStreamWithCompletionBlock:(/*^block*/id)arg1 ;
-(BOOL)doesConsumeExtractedData;
-(NSDictionary *)options;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(id)init;
-(id)initWithOptions:(id)arg1 ;
-(void)_invalidateObject;
-(void)setDelegate:(id<SZExtractorDelegate>)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id<SZExtractorDelegate>)delegate;
-(unsigned long long)hash;
-(void)prepareForExtraction:(/*^block*/id)arg1 ;
-(NSString *)description;
-(NSString *)extractionPath;
-(void)setExtractionPath:(NSString *)arg1 ;
-(void)setExtractorDelegate:(id<SZExtractorDelegate>)arg1 ;
-(void)setActiveExtractorDelegateMethods:(int)arg1 ;
-(id<SZExtractorDelegate>)extractorDelegate;
-(BOOL)consumeExtractedDataIfNeeded;
-(BOOL)needsPreparation;
-(void)setNeedsPreparation:(BOOL)arg1 ;
-(BOOL)_isValidObject;
-(void)_suspendStreamWithCompletionBlockSynchronously:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)isLocalExtractor;
-(void)_setUpWithPath:(id)arg1 options:(id)arg2 ;
-(id)initWithPath:(id)arg1 options:(id)arg2 resumptionOffset:(unsigned long long*)arg3 ;
-(BOOL)_synchronouslyPrepareForExtractionAtOffset:(unsigned long long*)arg1 ;
-(void)_prepareForExtractionSynchronously:(BOOL)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(NSXPCConnection *)unzipServiceConnection;
-(SZExtractorInternalDelegate *)internalExtractorDelegate;
-(void)setLastResumptionOffset:(unsigned long long)arg1 ;
-(unsigned long long)lastResumptionOffset;
-(StreamingUnzipper *)inProcessUnzipper;
-(BOOL)hasHadPostSetupMethodsCalled;
-(void)_prepareForLocalExtraction:(/*^block*/id)arg1 ;
-(void)_prepareForRemoteExtractionSynchronously:(BOOL)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)setHasHadPostSetupMethodsCalled:(BOOL)arg1 ;
-(id)initWithPath:(id)arg1 resumptionOffset:(unsigned long long*)arg2 ;
-(id)initWithPath:(id)arg1 md5Hashes:(id)arg2 hashedChunkSize:(unsigned long long)arg3 resumptionOffset:(unsigned long long*)arg4 ;
-(id)initForRemoteExtractionWithPath:(id)arg1 options:(id)arg2 resumptionOffset:(unsigned long long*)arg3 ;
-(id)initForLocalExtractionWithPath:(id)arg1 options:(id)arg2 resumptionOffset:(unsigned long long*)arg3 ;
@end

