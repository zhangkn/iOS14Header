/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:40 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <iTunesStoreUI/SUScriptObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SUScriptAction : SUScriptObject <NSCopying> {

	NSString* _actionType;

}

@property (copy) NSString * actionType; 
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(NSString *)actionType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)performAction;
-(id)initWithActionType:(id)arg1 ;
-(void)dealloc;
-(id)attributeKeys;
-(void)setActionType:(NSString *)arg1 ;
-(id)_className;
-(id)scriptAttributeKeys;
@end
