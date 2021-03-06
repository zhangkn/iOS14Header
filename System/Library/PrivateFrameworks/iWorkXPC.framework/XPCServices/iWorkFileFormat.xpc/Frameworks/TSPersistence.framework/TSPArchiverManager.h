/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:32:43 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSPArchiverManagerDelegate, OS_dispatch_queue;
@class NSMapTable, NSObject, TSPDescriptionGenerator;

@interface TSPArchiverManager : NSObject {

	id<TSPArchiverManagerDelegate> _delegate;
	Class _archiverClass;
	char _archiverFlags;
	NSMapTable* _archivers;
	NSObject*<OS_dispatch_queue> _archiversHighQueue;
	NSObject*<OS_dispatch_queue> _archiversLowQueue;
	NSObject*<OS_dispatch_queue> _archiveHighQueue;
	NSObject*<OS_dispatch_queue> _archiveDefaultQueue;
	NSObject*<OS_dispatch_queue> _archiveLowQueue;
	NSObject*<OS_dispatch_queue> _serializationQueue;
	Ac _flags;
	TSPDescriptionGenerator* _descriptionGenerator;

}

@property (nonatomic,retain) TSPDescriptionGenerator * descriptionGenerator;              //@synthesize descriptionGenerator=_descriptionGenerator - In the implementation block
-(void)dealloc;
-(id)init;
-(void)stop;
-(id)initWithDelegate:(id)arg1 archiverClass:(Class)arg2 archiverFlags:(char)arg3 ;
-(void)archiveObjectWithHighPriority:(id)arg1 ;
-(void)performAsynchronousArchiverAccessUsingBlock:(/*^block*/id)arg1 ;
-(id)explicitComponentRootObjectForObject:(id)arg1 hasArchiverAccessLock:(BOOL)arg2 ;
-(id)archiverForObject:(id)arg1 hasArchiverAccessLock:(BOOL)arg2 ;
-(void)archiveObjectWithLowPriority:(id)arg1 ;
-(id)impl_archiverForObject:(id)arg1 ;
-(id)archiverForObject:(id)arg1 archiveQueue:(id)arg2 waitForArchiving:(BOOL)arg3 ;
-(id)impl_explicitComponentRootObjectForObject:(id)arg1 ;
-(void)archiveWithArchiver:(id)arg1 queue:(id)arg2 waitForArchiving:(BOOL)arg3 ;
-(TSPDescriptionGenerator *)descriptionGenerator;
-(void)setDescriptionGenerator:(TSPDescriptionGenerator *)arg1 ;
@end

