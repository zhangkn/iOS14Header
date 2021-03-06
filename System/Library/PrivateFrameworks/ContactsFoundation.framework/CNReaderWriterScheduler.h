/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:14 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNReaderWriterScheduler.h>

@protocol CNReaderWriterScheduler <NSObject>
@required
-(void)suspend;
-(id)performReaderBlock:(/*^block*/id)arg1;
-(id)performWriterBlock:(/*^block*/id)arg1;
-(void)performSynchronousReaderBlock:(/*^block*/id)arg1;
-(void)performSynchronousWriterBlock:(/*^block*/id)arg1;
-(void)resume;

@end


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, NSString;

@interface CNReaderWriterScheduler : NSObject <CNReaderWriterScheduler> {

	BOOL _suspended;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableArray* _activeReaders;
	NSMutableArray* _pendingReaders;
	NSMutableArray* _activeWriters;
	NSMutableArray* _pendingWriters;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (assign,getter=isSuspended,nonatomic) BOOL suspended; 
@property (nonatomic,readonly) NSMutableArray * activeReaders;                  //@synthesize activeReaders=_activeReaders - In the implementation block
@property (nonatomic,readonly) NSMutableArray * pendingReaders;                 //@synthesize pendingReaders=_pendingReaders - In the implementation block
@property (nonatomic,readonly) NSMutableArray * activeWriters;                  //@synthesize activeWriters=_activeWriters - In the implementation block
@property (nonatomic,readonly) NSMutableArray * pendingWriters;                 //@synthesize pendingWriters=_pendingWriters - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithQueue:(id)arg1 ;
-(BOOL)isSuspended;
-(void)suspend;
-(id)init;
-(void)removeReader:(id)arg1 ;
-(void)appendDescriptionToBuilder:(id)arg1 ;
-(NSMutableArray *)activeWriters;
-(void)addReaderWithIdentifier:(id)arg1 ;
-(void)activateReader:(id)arg1 ;
-(NSMutableArray *)pendingWriters;
-(NSMutableArray *)activeReaders;
-(NSMutableArray *)pendingReaders;
-(id)performReaderBlock:(/*^block*/id)arg1 ;
-(id)performWriterBlock:(/*^block*/id)arg1 ;
-(void)performSynchronousReaderBlock:(/*^block*/id)arg1 ;
-(void)performSynchronousWriterBlock:(/*^block*/id)arg1 ;
-(void)addWriterWithIdentifier:(id)arg1 ;
-(void)activateWriter:(id)arg1 ;
-(void)removeWriter:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)resume;
-(void)setSuspended:(BOOL)arg1 ;
-(NSString *)description;
@end

