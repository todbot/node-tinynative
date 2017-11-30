{
  "targets": [
    {
      "target_name": "tinynative",
      "sources": [ "tinynative.cc" ],
      "include_dirs": [
        "<!(node -e \"require('nan')\")",
      ],
    }
  ]
}
