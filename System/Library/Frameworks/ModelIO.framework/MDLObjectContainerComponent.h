/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:28 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray;


@protocol MDLObjectContainerComponent <MDLComponent,NSFastEnumeration>
@property (readonly) unsigned long long count; 
@property (nonatomic,retain,readonly) NSArray * objects; 
@required
-(void)removeObject:(id)arg1;
-(id)objectAtIndexedSubscript:(unsigned long long)arg1;
-(void)addObject:(id)arg1;
-(NSArray *)objects;
-(unsigned long long)count;

@end
