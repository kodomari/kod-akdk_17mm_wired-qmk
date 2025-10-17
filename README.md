# kod-akdk_17mm_wired QMK Firmware

RP2040-ONEを使用した分割式カスタムキーボード用のQMKファームウェアです。

## 使用方法

1. `keyboards/handwired/` の内容をQMKファームウェアディレクトリにコピー
2. `qmk compile -kb handwired/ro_split_exact_right -km default`
3. `elf2uf2-rs` でUF2変換
4. RP2040-ONEにフラッシュ

詳細は各ディレクトリ内のファイルを参照してください。

## Build

- **Left**: build *without* `MASTER_RIGHT`
- **Right**: build *with* `MASTER_RIGHT` (build flag)

```bash
qmk clean
# Left
qmk compile -kb handwired/ro_split_exact_right -km left  -e BUILD_DIR=/tmp/qmk_build_left
# Right
qmk compile -kb handwired/ro_split_exact_right -km right -e BUILD_DIR=/tmp/qmk_build_right
# （right キーマップが無い場合は一時的に）
# qmk compile -kb handwired/ro_split_exact_right -km left \
#   -e OPT_DEFS+=-DMASTER_RIGHT -e BUILD_DIR=/tmp/qmk_build_right

この場合uf2ファイルはDropboxでの影響を避けて/tmpにビルドされる
