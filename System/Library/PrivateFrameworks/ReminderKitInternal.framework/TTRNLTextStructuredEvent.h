/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:27 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ReminderKitInternal.framework/ReminderKitInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TTRNLTextStructuredEventRecurrentEvent, NSArray;

@interface TTRNLTextStructuredEvent : NSObject {

	void* _structuredEvent;

}

@property (assign,nonatomic) void* structuredEvent;                                                  //@synthesize structuredEvent=_structuredEvent - In the implementation block
@property (nonatomic,readonly) TTRNLTextStructuredEventRecurrentEvent * recurrentEvent; 
@property (nonatomic,readonly) NSArray * locations; 
-(NSArray *)locations;
-(void)dealloc;
-(id)initWithStructuredEvent:(void*)arg1 ;
-(void*)structuredEvent;
-(TTRNLTextStructuredEventRecurrentEvent *)recurrentEvent;
-(void)setStructuredEvent:(void*)arg1 ;
@end
