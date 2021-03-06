/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:08 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CAStateElement.h>

@class NSString;

@interface CAStateRemoveElement : CAStateElement {

	NSString* _keyPath;
	id _object;

}

@property (nonatomic,copy) NSString * keyPath;              //@synthesize keyPath=_keyPath - In the implementation block
@property (nonatomic,retain) id object;                     //@synthesize object=_object - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)CAMLParser:(id)arg1 setValue:(id)arg2 forKey:(id)arg3 ;
-(void)setKeyPath:(NSString *)arg1 ;
-(BOOL)CAMLTypeSupportedForKey:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setObject:(id)arg1 ;
-(id)debugDescription;
-(void)dealloc;
-(id)CAMLTypeForKey:(id)arg1 ;
-(void)apply:(id)arg1 ;
-(BOOL)matches:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)keyPath;
-(void)encodeWithCoder:(id)arg1 ;
-(id)object;
-(void)encodeWithCAMLWriter:(id)arg1 ;
@end

