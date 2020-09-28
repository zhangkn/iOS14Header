/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:43 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/KSWriter.h>

@protocol KSWriter;
@class NSString;

@interface KSForwardingWriter : NSObject <KSWriter> {

	id<KSWriter> _writer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)close;
-(void)dealloc;
-(id)init;
-(void)writeString:(id)arg1 ;
-(id)initWithOutputWriter:(id)arg1 ;
@end
