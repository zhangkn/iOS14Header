/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:28 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SpeechRecognitionCommandAndControl/SpeechRecognitionCommandAndControl-Structs.h>
@class NSData;

@interface CACTextMarker : NSObject {

	unsigned long long _index;
	NSData* _data;

}
+(id)markerWithIndex:(unsigned long long)arg1 ;
+(id)markerWithData:(id)arg1 ;
+(BOOL)marker:(id)arg1 precedesOrEqualsMarker:(id)arg2 forUIElement:(id)arg3 ;
+(unsigned long long)lengthFromMarker:(id)arg1 toMarker:(id)arg2 forUIElement:(id)arg3 ;
+(BOOL)marker:(id)arg1 precedesMarker:(id)arg2 forUIElement:(id)arg3 ;
-(void)setIndex:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)data;
-(unsigned long long)index;
-(void)setData:(id)arg1 ;
-(id)initWithIndex:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
@end
