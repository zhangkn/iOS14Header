/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:51:35 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MFGuaranteedCollectingDataConsumer.h>

@class MFDataHolder, NSString;

@interface MFZeroCopyDataConsumer : NSObject <MFGuaranteedCollectingDataConsumer> {

	MFDataHolder* _dataHolder;
	BOOL _done;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)data;
-(long long)appendData:(id)arg1 ;
-(void)done;
-(id)init;
@end
