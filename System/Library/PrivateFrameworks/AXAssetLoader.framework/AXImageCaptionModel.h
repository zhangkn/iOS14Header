/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:51:37 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AXAssetLoader.framework/AXAssetLoader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSString;

@interface AXImageCaptionModel : NSObject {

	NSDictionary* _modelProperties;

}

@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * version; 
@property (nonatomic,readonly) NSString * stage; 
@property (nonatomic,readonly) NSString * language; 
-(NSString *)version;
-(NSString *)language;
-(NSString *)stage;
-(NSString *)name;
-(id)initWithModelProperties:(id)arg1 ;
-(id)description;
@end

