/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:00 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSMutableDictionary, NSObject, NSString;

@interface BLTPreviouslySentMessageStore : NSObject {

	NSMutableDictionary* _messageDigests;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _saveTimer;
	NSString* _path;
	BOOL _dirty;

}

@property (assign,nonatomic) BOOL dirty;              //@synthesize dirty=_dirty - In the implementation block
-(void)clear;
-(void)_save;
-(void)invalidate;
-(BOOL)dirty;
-(void)dealloc;
-(void)setDirty:(BOOL)arg1 ;
-(BOOL)isEmpty;
-(id)initWithMessageStorePath:(id)arg1 ;
-(id)messageDigestForUnsentMessage:(id)arg1 messageKey:(id)arg2 ;
-(void)recordMessageDigestAsPreviouslySent:(id)arg1 messageKey:(id)arg2 ;
-(void)removeDigestForKey:(id)arg1 ;
-(void)_cancelSave;
-(void)_enqueueSave;
@end

