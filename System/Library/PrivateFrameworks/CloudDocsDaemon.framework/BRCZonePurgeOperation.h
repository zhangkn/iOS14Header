/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:47 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsDaemon/_BRCOperation.h>
#import <libobjc.A.dylib/BRCOperationSubclass.h>

@class BRCPrivateServerZone, NSString;

@interface BRCZonePurgeOperation : _BRCOperation <BRCOperationSubclass> {

	BRCPrivateServerZone* _serverZone;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)shouldRetryForError:(id)arg1 ;
-(id)createActivity;
-(void)main;
-(id)initWithServerZone:(id)arg1 ;
@end

