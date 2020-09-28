/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:31:31 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSTables.framework/TSTables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSPObject.h>
#import <TSTables/TSDArchivedHint.h>

@class TSTLayoutHint, NSString;

@interface TSTArchivedLayoutHint : TSPObject <TSDArchivedHint> {

	TSTLayoutHint* mHint;

}

@property (nonatomic,retain) TSTLayoutHint * hint; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(TSTLayoutHint *)hint;
-(void)dealloc;
-(void)setHint:(TSTLayoutHint *)arg1 ;
-(id)initWithContext:(id)arg1 hint:(id)arg2 ;
@end
