/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:08 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, PTTestRecipeInfo;

@interface PTTestRecipe : NSObject {

	NSString* _title;
	/*^block*/id _prepareBlock;
	/*^block*/id _cleanupBlock;
	PTTestRecipeInfo* _info;
	/*^block*/id _invalidationHandler;

}

@property (nonatomic,retain) PTTestRecipeInfo * info;              //@synthesize info=_info - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                 //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,readonly) NSString * title;                   //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) id prepareBlock;                        //@synthesize prepareBlock=_prepareBlock - In the implementation block
@property (nonatomic,copy) id cleanupBlock;                        //@synthesize cleanupBlock=_cleanupBlock - In the implementation block
-(void)_activate;
-(void)invalidate;
-(void)setInvalidationHandler:(id)arg1 ;
-(NSString *)title;
-(id)cleanupBlock;
-(void)setCleanupBlock:(id)arg1 ;
-(id)invalidationHandler;
-(PTTestRecipeInfo *)info;
-(void)_handleEvent:(long long)arg1 ;
-(void)setInfo:(PTTestRecipeInfo *)arg1 ;
-(BOOL)_wantsEvent:(long long)arg1 ;
-(void)_deactivate;
-(id)_initWithTitle:(id)arg1 prepareBlock:(/*^block*/id)arg2 cleanupBlock:(/*^block*/id)arg3 ;
-(id)prepareBlock;
-(void)setPrepareBlock:(id)arg1 ;
@end

