//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTUserInterfaceKit/DVTGradientImageButton.h>

@class NSPopUpButtonCell;

@interface IDEActionButton : DVTGradientImageButton
{
    NSPopUpButtonCell *_popUpCell;
    CDUnknownBlockType _menuProvider;
    struct CGSize _menuOffset;
}

- (void).cxx_destruct;
@property struct CGSize menuOffset; // @synthesize menuOffset=_menuOffset;
- (id)accessibilityRole;
- (BOOL)accessibilityPerformPress;
- (void)mouseDown:(id)arg1;
- (void)_showIssuesMenu:(id)arg1;
- (void)setCurrentMenuProvider:(CDUnknownBlockType)arg1;

@end

