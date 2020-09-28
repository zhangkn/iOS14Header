/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:26 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface _PASDatabaseJournalFile : NSObject {

	NSString* _path;
	unsigned long long _len;
	unsigned long long _readCursor;
	int _fd;
	BOOL _written;
	BOOL _dead;

}

@property (nonatomic,readonly) BOOL isFullyRead; 
@property (nonatomic,readonly) BOOL isAlive; 
@property (nonatomic,readonly) unsigned long long length; 
-(id)initWithPath:(id)arg1 ;
-(void)clear;
-(void)destroyAndUnlinkIfEmpty;
-(BOOL)isFullyRead;
-(id)read;
-(void)unlink;
-(void)dealloc;
-(unsigned long long)length;
-(void)write:(id)arg1 ;
-(id)init;
-(BOOL)isAlive;
-(void)destroy;
-(id)description;
@end
