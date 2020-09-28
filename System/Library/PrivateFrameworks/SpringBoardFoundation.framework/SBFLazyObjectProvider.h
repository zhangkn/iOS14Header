/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:31 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SBFLazyObjectProvider : NSObject {

	id _object;
	/*^block*/id _generator;

}

@property (nonatomic,retain) id object;               //@synthesize object=_object - In the implementation block
@property (nonatomic,copy) id generator;              //@synthesize generator=_generator - In the implementation block
-(id)generator;
-(void)setObject:(id)arg1 ;
-(id)initWithGenerator:(/*^block*/id)arg1 ;
-(id)object;
-(void)setGenerator:(id)arg1 ;
@end
