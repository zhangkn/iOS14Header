/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:37 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/NanoTimeKit/ComplicationBundles/WorldClockComplications.bundle/WorldClockComplications
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate;

@interface NWCComplicationTimelineEntryModel : NSObject {

	NSDate* _entryDate;

}

@property (nonatomic,readonly) NSDate * entryDate;              //@synthesize entryDate=_entryDate - In the implementation block
-(NSDate *)entryDate;
-(id)initWithEntryDate:(id)arg1 ;
-(id)templateForComplicationFamily:(long long)arg1 ;
-(id)timelineEntryForComplicationFamily:(long long)arg1 ;
@end

