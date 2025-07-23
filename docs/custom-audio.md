# Custom Audio
To replace a sequences you should only create a zip file with sequences to replace at the same path as mk64.o2r. Only wav, mp3, ogg and flac are supported.
## Example:
You want to change sound/sequences/main_menu then you just need to create a zip file with the following structure:
```
textures_pack.zip
└── sound
    └── sequences
        └── main_menu.mp3
```

## Future plans
* Make name more meaningful and uniform. (example: change `winning_results`). You can suggest name or make a PR to help rename them/organise them.
* Support samples.
* Create a tool to convert sequences and samples.
* Modify the way music is handled that way each track gets its own sequence. There is a current issue where `moo_moo_farm_yoshi_valley` share the same sequence file. Block Fort and Double Deck both share a song with `choco_mountain`.
