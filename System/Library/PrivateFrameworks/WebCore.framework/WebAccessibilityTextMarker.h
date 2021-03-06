/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:44 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebCore/WebCore-Structs.h>
@interface WebAccessibilityTextMarker : NSObject {

	AXObjectCache* _cache;
	TextMarkerData* _textMarkerData;

}
+(id)textMarkerWithVisiblePosition:(VisiblePosition*)arg1 cache:(AXObjectCache*)arg2 ;
+(id)textMarkerWithCharacterOffset:(CharacterOffset*)arg1 cache:(AXObjectCache*)arg2 ;
+(id)startOrEndTextMarkerForRange:(const Optional<WebCore::SimpleRange>*)arg1 isStart:(BOOL)arg2 cache:(AXObjectCache*)arg3 ;
-(id)dataRepresentation;
-(BOOL)isIgnored;
-(id)initWithData:(id)arg1 cache:(AXObjectCache*)arg2 ;
-(id)initWithTextMarker:(TextMarkerData*)arg1 cache:(AXObjectCache*)arg2 ;
-(id)initWithData:(id)arg1 accessibilityObject:(id)arg2 ;
-(VisiblePosition*)visiblePosition;
-(CharacterOffset*)characterOffset;
-(AccessibilityObject*)accessibilityObject;
-(id)description;
@end

