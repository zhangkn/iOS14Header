/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:52 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SFUOutputStream.h>

@protocol SFUOutputStream;
@class NSString;

@interface OISFUOffsetOutputStream : NSObject <SFUOutputStream> {

	id<SFUOutputStream> mOutputStream;
	long long mInitialOffset;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)close;
-(BOOL)canSeek;
-(void)dealloc;
-(long long)offset;
-(id)inputStream;
-(id)initWithOutputStream:(id)arg1 ;
-(id)closeLocalStream;
-(void)seekToOffset:(long long)arg1 whence:(int)arg2 ;
-(BOOL)canCreateInputStream;
-(void)writeBuffer:(const char*)arg1 size:(unsigned long long)arg2 ;
@end

